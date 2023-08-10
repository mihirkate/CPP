// Date :- 12/01/2022

/*

Create a class Circle and use inheritance to crete another class Cylinder from it.

*/

import java.util.Scanner;

class InputShouldPositive extends Exception {

  @Override
  public String toString() {
    return "The input Should Positive";
  }
}

class Circle {
  public int r;
  public int p;
  public float pi = 3.14159f;
  public int h;
  public int a;
  Scanner sc = new Scanner(System.in);

  public void area() throws InputShouldPositive {
    System.out.println("Display the circle Area.");
    System.out.println("Enter the Circle radius: " + r);
    r = sc.nextInt();

    if (r <= 0) {
      throw new InputShouldPositive();
    } else {
      float A = pi * (r * r);
      System.out.println("Circle Area is: " + A);
      System.out.println();
    }
  }

  public void diameter() throws InputShouldPositive {
    System.out.println("Display the circle Diameter.");
    System.out.println("Enter the Circle radius: " + r);
    r = sc.nextInt();
    if (r <= 0) {
      throw new InputShouldPositive();
    } else {
      int D = 2 * r;
      System.out.println("Circle Diameter is: " + D);
      System.out.println();
    }
  }

  public void circumference() throws InputShouldPositive {
    System.out.println("Display the circle Circumference.");
    System.out.println("Enter the Circle radius: " + r);
    r = sc.nextInt();

    if (r <= 0) {
      throw new InputShouldPositive();
    } else {
      float C = 2 * pi * r;
      System.out.println("Circle Circumference is : " + C);
      System.out.println();
      System.out.println();
    }
  }
}

class Cylinder extends Circle {

  public void volume() throws InputShouldPositive {
    System.out.println("Display the Cylinder Volume.");
    System.out.println("Enter the Cylinder Radius: " + p);
    p = sc.nextInt();

    System.out.println("Enter the Cylinder Height: " + h);
    h = sc.nextInt();
    if (p <= 0 && h <= 0) {
      throw new InputShouldPositive();
    } else {
      float V = pi * (p * p) * h;
      System.out.format("Cylinder Volume is: %f", V);
      System.out.println();
    }
  }

  public void lateralSuraface() throws InputShouldPositive {
    System.out.println("Display the Cylinder Lateral Surface.");
    System.out.println("Enter the Cylinder Radius: " + p);
    p = sc.nextInt();

    System.out.println("Enter the Cylinder Height: " + h);
    h = sc.nextInt();

    if (p <= 0 && h <= 0) {
      throw new InputShouldPositive();
    } else {
      float V = 2 * pi * p * h;
      System.out.format("Cylinder Lateral Lateral Surface is: %f", V);
      System.out.println();
    }
  }

  public void surafaceArea() throws InputShouldPositive {
    System.out.println("Display the Cylinder Surface Area.");
    System.out.println("Enter the Cylinder Radius: " + p);
    p = sc.nextInt();

    System.out.println("Enter the Cylinder Height: " + h);
    h = sc.nextInt();

    if (p <= 0 && h <= 0) {
      throw new InputShouldPositive();
    } else {
      float V = (2 * pi * p * h) + (2 * pi * (p * p));
      System.out.format("Cylinder Surface Area is: %f", V);
      System.out.println();
    }
  }
}

class Square extends Cylinder {

  public void perimeter() throws InputShouldPositive {
    System.out.println("Display the Square Perimeter.");
    System.out.println("Enter the Square side: " + a);
    a = sc.nextInt();
    if (a <= 0) {
      throw new InputShouldPositive();
    } else {
      float PE = 4 * a;
      System.out.println("Square Perimeter is: " + PE);
      System.out.println();
    }
  }

  public void diagonal() throws InputShouldPositive {
    System.out.println("Display the Square Diagonal.");
    System.out.println("Enter the Square side: " + a);
    a = sc.nextInt();

    if (a <= 0) {
      throw new InputShouldPositive();
    } else {
      double DI = Math.sqrt(2) * a;
      System.out.println("Square Diagonal is: " + DI);
      System.out.println();
    }
  }

  public void Area() throws InputShouldPositive {
    System.out.println("Display the Square Perimeter.");
    System.out.println("Enter the Square side: " + a);
    a = sc.nextInt();

    if (a <= 0) {
      throw new InputShouldPositive();
    } else {
      float AE = a * a;
      System.out.println("Square Perimeter is: " + AE);
      System.out.println();
    }
  }
}

public class calci {

  public static void main(String[] args) throws InputShouldPositive {
    System.out.println();
    System.out.format("                Welcome to Digital Calculator");
    System.out.println();
    System.out.println();
    Scanner.us = new Scanner(System.in);

    Square cy = new Square();

    while (true) {
      System.out.println(
          "Select the calculator\n          1 for circle\n          2 for Cylinder\n          3 for Square\n          0 for exit");
      int userinput = us.nextInt();

      switch (userinput) {

        case 1:
          System.out.println(
              "          1 for Calculate the Area \n          2 for Calculate the Diameter \n          3 for Calculate the circumference");
          int ci = us.nextInt();
          switch (ci) {
            case 1:
              cy.area();

              break;
            case 2:
              cy.diameter();

              break;
            case 3:
              cy.circumference();

              break;
            default:
              System.out.println("Enter the valid number!");
              break;
          }

          break;
        case 2:
          System.out.println(
              "          1 for Calculate the Volume \n          2 for Calculate the Lateral Surface \n          3 for Calculate the Surface");
          int cyn = us.nextInt();

          switch (cyn) {
            case 1:
              cy.volume();

              break;
            case 2:
              cy.lateralSuraface();

              break;
            case 3:
              cy.surafaceArea();

              break;
            default:
              System.out.println("Enter the valid number!");
              break;
          }

          break;
        case 3:
          System.out.println(
              "          1 for Calculate the Perimeter \n          2 for Calculate the Diagonal \n          3 for Calculate the Area");
          int SQ = us.nextInt();

          switch (SQ) {
            case 1:
              cy.perimeter();

              break;
            case 2:
              cy.diagonal();

              break;
            case 3:
              cy.Area();

              break;
            default:
              System.out.println("Enter the valid number!");
              break;
          }

          break;
        case 0:
          System.out.println("Thank You !!!!!");

          System.exit(0);

          break;
        default:
          System.out.println("Enter the valid number!");

          break;
      }
    }

  }
}
