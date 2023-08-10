/*
Author Name :- Mihir Kate
Date :- 02/01/2022
Topic :- incline functions */

#include <iostream>
using namespace std;

//  int product(int a, int b)
// {
    // int c = 0; 
    //  c = c + 1;
    // return a * b;

// int main()
// {
//     int a, b;

//     cout << "enter value of and b " << endl;
//     cin >> a >> b;

//     cout << "the product of a and b is " << product(a, b) << endl;

//     return 0;
// }ff

float moneyrecieved(int currentmoney,float factor=1.04)
{
return currentmoney*factor;
}
int main(){
int money=100000;
cout<<"If you have "<<money<<"  rs in your bank account you will get "<<moneyrecieved(money)<<"  after one year"<<endl;

return 0;
}
y