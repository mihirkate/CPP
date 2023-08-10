# Importing the turtle and random library
# import turtle
# from random import randint
# Creating the screen with name and size
# screen = turtle.Screen()
# screen.title("DataFlair Pinball game")
# screen.setup(width=1000 , height=600)
# Creating the paddle
# paddle = turtle.Turtle()
# Setting its speed as zero, it moves only when key is pressed
# paddle.speed(0) 
# Setting shape, color, and size
# paddle.shape("square")
# paddle.color("blue")
# paddle.shapesize(stretch_wid=2, stretch_len=6) 
# paddle.penup()
# The paddle is left-centered initially 
# paddle.goto(-400,-250)
# Creating the ball of circle shape
# ball = turtle.Turtle()

# Setting the speed of ball to 0, it moves based on the dx and dy values
# ball.speed(1)
# Setting shape, color, and size
# ball.shape("circle")
# ball.color("red")
# ball.penup()
# Ball starts from the random position from the top of the screen
# x=randint(-400,400)
# ball.goto(x, 260)
# Setting dx and dy that decide the speed of the ball
# ball.dx = 2
# ball.dy = -2
# score=0

# Displaying the score
# scoreBoard = turtle.Turtle()
# scoreBoard.speed(0)
# scoreBoard.penup()
# Hiding the turtle to show text
# scoreBoard.hideturtle()
# Locating the score board on top of the screen
# scoreBoard.goto(0, 260)
# Showing the score
# scoreBoard.write("Score : 0 ", align="center", font=("Courier", 20, "bold"))
# Functions to move the paddle left and right
# def movePadRight():
#     x = paddle.xcor() #Getting the current x-coordinated of the paddle
#     x += 15 
#     paddle.setx(x) #Updating the x-coordinated of the paddle

# Function to move the left paddle down
# def movePadLeft():
#     x = paddle.xcor() #Getting the current x-coordinated of the paddle
#     x -= 15 
#     paddle.setx(x) #Updating the x-coordinated of the paddle

# Mapping the functions to the keyboard buttons
# screen.listen()
# screen.onkeypress(movePadRight, "Right")
# screen.onkeypress(movePadLeft, "Left")
# while True:
#     Updating the screen everytime with the new changes
#     screen.update()
    
#     ball.setx(ball.xcor()+ball.dx)
#     ball.sety(ball.ycor()+ball.dy)

#     Checking if ball hits the left, right, and top walls of the screen  
#     if ball.xcor() > 480:
#         ball.setx(480)
#         ball.dx *= -1 #Bouncing the ball 
 
#     if ball.xcor() < -480:
#         ball.setx(-480)
#         ball.dx *= -1#Bouncing the ball 
    
#     if ball.ycor() >280:
#         ball.setx(280)
#         ball.dy *= -1#Bouncing the ball 
    
#     Checking if the ball hits bottom and ending the game
#     if ball.ycor() < -260:
#         scoreBoard.clear()
#         scoreBoard1 = turtle.Turtle()
#         scoreBoard1.speed(0)
#         scoreBoard1.penup()
#         Hiding the turtle to show text
#         scoreBoard1.hideturtle()
#         Locating the score board on top of the screen
#         scoreBoard1.goto(0, 0)
#         scoreBoard1.color('black')
#         Showing the score
#         scoreBoard1.write("Score : {} ".format(score),    align="center", font=("Courier", 30, "bold"))
       
    
#     Checking if paddle hits the ball, updating score, increasing speed and bouncing the ball
#     if (paddle.ycor() + 30 > ball.ycor() > paddle.ycor() - 30 and 
#        paddle.xcor() + 50 > ball.xcor() > paddle.xcor() - 50 ):

#         Increasing score of left player and updating score board
#         score += 1 
#         scoreBoard.clear()
#         scoreBoard.write("Score: {}".format(score), align="center", font=("Courier", 20, "bold"))
        
#         Increasing speed of the ball with the limit 7
#         if(ball.dy>0 and ball.dy<5): #If dy is positive increasing dy
#             ball.dy+=0.5
#         elif(ball.dy<0 and ball.dy>-5): #else if dy is negative decreasing dy
#             ball.dy-=0.5
            
#         if(ball.dx>0 and ball.dx<5):#If dx is positive increasing dx
#             ball.dx+=0.5
#         elif(ball.dx<0 and ball.dx>-5): #else if dx is negative decreasing dx
#             ball.dx-=0.5
        
#         Changing the direction of ball towards the right player
#         ball.dy *=-1 
# while (True):
#     screen.update()
import pygame, sys
import random
import json

pygame.init()
CLOCK = pygame.time.Clock()
FPS = 60
W, H = 900, 600
SCREEN = pygame.display.set_mode((W, H)) # make pygame window
TITLE = pygame.display.set_caption("ShooterRange")
ICON = pygame.image.load("assets\images\icon.png")
pygame.display.set_icon(ICON)

pygame.mouse.set_visible(False)
gunshot = pygame.mixer.Sound("assets\sounds\gunshot.wav")
gunshot.set_volume(0.2)

with open ("settings.json", "r") as json_file:
    game_settings = json.load(json_file)

colors = {
    "white" : (255, 255, 255),
    "gray" : (20, 20, 20),
    "black" : (0, 0, 0),
    "background" : (220, 215, 215),
    "red" : (255, 0, 0),
    "yellow" : (255, 210, 59),
    "orange" : (255, 178, 74),
    "pink" : (255, 49, 135),}

def getfont(size):
    return pygame.font.Font("assets\\fonts\gunplay.ttf", size)

class Text:
    def __init__(self, text : str, size : int, **kwargs):
        self.text = text
        self.size = size
        self.kwargs = kwargs
        self.surf = getfont(self.size).render(str(self.text), True, colors["gray"])
        self.rect = self.surf.get_rect(**self.kwargs)

    def draw(self):
        SCREEN.blit(self.surf, self.rect)

class Player(pygame.sprite.Sprite):
    def __init__(self, size):
        super().__init__()
        self.size = size
        self.surf = pygame.transform.scale(pygame.image.load("assets\images\crosshair.png").convert_alpha(), (self.size, self.size))
        self.dot = pygame.transform.scale(pygame.image.load("assets\images\crosshair_dot.png").convert_alpha(), (self.size, self.size))
        self.rect = self.surf.get_rect(center = (W/2, H/2))
        self.mask = pygame.mask.from_surface(self.dot)
        self.reload = 1

    def draw(self):
        SCREEN.blit(self.surf, self.rect)

    def shoot(self):
        self.reload = 0
        if game_settings["sound"]:
            gunshot.play()

    def update(self):
        if self.reload < 1:
            self.reload = round(self.reload + 1/60, 4)
        if self.reload > 1:
            self.reload = 1
        self.rect.center = pygame.mouse.get_pos()
        self.draw()

class Target(pygame.sprite.Sprite):
    def __init__(self, size):
        super().__init__()
        self.size = size
        self.surf = pygame.transform.scale(pygame.image.load("assets\images\\target.png").convert_alpha(), (self.size, self.size))
        self.rect = self.surf.get_rect(center = (random.randint(0 + self.size, W - self.size), random.randint(title.rect.bottom + 20 + self.size, reloadbar.rect.top - 20 - self.size)))
        self.mask = pygame.mask.from_surface(self.surf)
    
    def draw(self):
        SCREEN.blit(self.surf, self.rect)

    def update(self):
        self.draw()

class Reloadbar():
    def __init__(self, w, h, **kwargs):
        self.w = w/100
        self.maxw = w
        self.h = h
        self.kwargs = kwargs
        self.value = 100
        self.surf = pygame.surface.Surface((self.w * self.value, self.h))
        self.surf.fill(colors["yellow"])
        self.rect = self.surf.get_rect(**self.kwargs)
        self.max_surf = pygame.surface.Surface((self.maxw, self.h))
        self.max_surf.fill(colors["pink"])
        self.max_rect = self.max_surf.get_rect(**self.kwargs)
    
    def draw(self):
        SCREEN.blit(self.max_surf, self.max_rect)
        SCREEN.blit(self.surf, self.rect)
        pygame.draw.aalines(SCREEN, colors["black"], True,
        (self.max_rect.topleft, self.max_rect.topright, self.max_rect.bottomright, self.max_rect.bottomleft))

    def update(self):
        self.value = int(player.reload * 100)
        self.surf = pygame.surface.Surface((self.w * self.value, self.h))
        self.rect = self.surf.get_rect(**self.kwargs)
        if self.value == 100:
            self.surf.fill(colors["orange"])
        else:
            self.surf.fill(colors["yellow"])
        self.draw()


title = Text("SHOOTER RANGE", 36, midtop = (W/2, 20))
reloadbar = Reloadbar(W/2, 10, midbottom = (W/2, H - 20))

player_group = pygame.sprite.GroupSingle()
player = Player(H/16)
player_group.add(player)

target_group = pygame.sprite.Group()
def generate():
    for i in range(25):
        target = Target(H/10)
        target_group.add(target)

def colisions():
    if pygame.sprite.spritecollide(player, target_group, False):
        pygame.sprite.spritecollide(player, target_group, True, pygame.sprite.collide_mask)


def main():
    global game_settings
    generate()        
    while True:
        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                with open ("settings.json", "w") as json_file:
                    json.dump(game_settings, json_file, indent=4)
                pygame.quit()
                sys.exit()
            if event.type == pygame.MOUSEBUTTONDOWN:
                if bool(int(player.reload)):
                    colisions()
                    player.shoot()
            if event.type == pygame.KEYDOWN:
                if event.key == pygame.K_SPACE:
                    target_group.empty()
                    generate()
                if event.key == pygame.K_m:
                    game_settings["sound"] = not game_settings["sound"]

        SCREEN.fill(colors["background"])

        target_group.update()
        reloadbar.update()
        title.draw()
        player_group.update()

        if len(target_group.sprites()) <= 0:
            generate()
        
        CLOCK.tick(FPS)
        pygame.display.update()

main()