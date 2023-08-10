/*
Author Name :- Mihir Kate
Date :- 02/01/2022
Topic :- incline functions */

#include <iostream>
using namespace std;

 inline int product(int a, int b)
{
    static int c = 0; //------>> This will not execute
     c = c + 1;/*--------->> next time the value will be saved (manjech ata c =0 ahe  mg punha yeil run honyasathi yeil 
                                   tevha to zero nasel ,tar ti ata 1 asel} */
    // naserll teva tyachi value 1 asel ani tyachyanntr pn  to ala un honyasathi mg tyachi value hi ata 1+1 +2 asel)
    return a * b;
// 
// /* inline sobat statric vapru naka it is not recommended to use inline with static variables */

// int main()
// {
//     int a, b;

//     cout << "enter value of and b " << endl;
//     cin >> a >> b;

//     cout << "the product of a and b is " << product(a, b) << endl;

//     return 0;
// }

float moneyrecieved(int currentmoney,float factor=1.04)
{
return currentmoney*factor;
}
int main(){
int money=100000;
cout<<"If you have "<<money<<"  rs in your bank account you will get "<<moneyrecieved(money)<<"  after one year"<<endl;
return 0;l
}
