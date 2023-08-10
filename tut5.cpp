#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout << "Enter the  value of numb 1:\n"; /*'<<' is called insertion operator*/
    cin >> num1;                             /*>> is extraction operator */

    cout << "Enter the value of num2 :\n";
    cin >> num2;

    cout << "\nThe sum is " << num1 + num2;

    cout << "\nThe subtraction is " << num1 - num2;

    return 0;
}
 