/*
Author Name :- Mihir Kate
Date :- 03/01/2022
Topic :- recursions */

/* Recursion are something that is recurring ass like permutation combination ,factorials
which keeps on recurring until it reaches  one factoraial 1!
*/

#include <iostream>
using namespace std;
int fib(int n){}
{
    if (n < 2)
    {
        return 1;
    }
    return fib(n - 2) + fib(n - 1); // This is the formula for fibonacci sequence
}
int main()
{
    int n;
    cout << "enter a no .for fionacci sequence " << endl;
    cin >> n;

    cout << "the fibonacci sequence is " << n << fib(n) << endl;

    return 0;
}
// int factorial(int n)
// {
//     if (n <= 1)
//     {
//         return 1;
//     }return n*factorial(n-1);//------>  This is the formula for  factorial

// }
// int main()
// {                                                                      
//     int n;
//     cout << "Enter The no. for factorial" << endl;//it will check if n=1 ---->>> execute and will return 1;
//                                                    //if n is greater than 1(n>1) ----->>>> execute the factorial
                                                       // if n=0 ------->>> it will return 1;

//     cout << "the factorail of" << n << "is " << factorial(n) << endl;

//     return 0;                                                                                                                                                                      
// }