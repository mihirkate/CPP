/*
Author :- Mihir Mangesh Kate
Date :- 09-12-2021
Topic :- Operator and hedar file in C++.
*/
/*
  
*/

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter  the value of num1" << endl;
    cin >> a;

    cout << "Enter  the value of num1" << endl;
    cin >> b;

    cout << " Operators in c++" << endl;
    cout << "  Following are the Operators in c++" << endl;
    // arithmatic opeartors
    cout << "the value of a + b is " << a + b << endl;
    cout << "the value of a - b is " << a - b << endl;
    cout << "the value of a * b is " << a * b << endl;
    cout << "the value of a / b is " << a / b << endl;
    cout << "the value of a % b is " << a % b << endl; 
    cout << "the value of a + +is " << a++ << endl;/* Adhi a chi  value assign honar mg tyachyat 1 ne vaad 
    honar
     */

    cout << "the value of a-- is " << a-- << endl;/* adhi a chi value assigh hoinar mg 1 digit ne minus honar */
    cout << "the value of ++a is " << ++a << endl;// adhi 1 digit ne add honar ani mg a chi value assign honar//

    cout << "the value of --a is " << --a << endl;//adhi minus honar nntr a chi value assign honar//
     
    cout << endl;

    //assignment operartors
    /*int a=3,b=5;
    char d='d';*/

    //comparison operators
    cout << "the following are the comparision operators " << endl;
    cout << " The value of a==b is " << (a == b) << endl;
    cout << " The value of a!=b is " << (a != b) << endl;
    cout << " The value of a>=b is " << (a >= b) << endl;
    cout << " The value of a<=b is " << (a <= b) << endl;
    cout << " The value of a>b is " << (a > b) << endl;
    cout << " The value of a<b is " << (a < b) << endl;
    cout << " The value of a==b is " << (a == b) << endl;

    // logical opearators
    cout << "These are the following logical operators " << endl;

    cout << " The value of this logical and operator ((a==b))&& (a<b) is " << ((a == b) && (a < b)) << endl;
    cout << " The value of this logical OR operator ((a==b))|| (a<b) is " << ((a == b) || (a < b)) << endl;
    cout << " The value of this logical NOT operator (!(a==b))|| (a<b) is " << (!(a == b)) << endl;

    return 0;
}
/*
      a==8

  <= < > >=  ==

*/