6#include <iostream>
using namespace std;
int main()
{
    int user;
    // cout " " << endl;
    cout << "enter your querry" << endl;

    // cout<<""<<endl;

    cout << " 1 : Balance enquiry" << endl;
    cout << " 2 : Expiratiom of balance" << endl;
    cout << " 3 : New offers " << endl;
    cout << " 4 : Your phone number " << endl;
    cout << " 5 : get you haal chal " << endl;

    cin >> user;

    switch (user)
    {
    case 1:
        cout << "your balance is 1.5gb for the rest  of day" << endl;
        break;
    case 2:
        cout << " ypur  balance expiration date is 28/02/2022 " << endl;
        break;
    case 3:
        cout << "   recharge  for $3 and get upto  28 days  1.5 gb for free and 1000 calls and sms/day free !!! freee!!! free!!  " << endl;
        break;
    case 4:
        cout << "your phone number is  9321867748  " << endl;
        break;
    case 5:
        cout << "kaisa hai bhai  " << endl;
        break;
    default:
        cout << "your input is invalid " << endl;
    }

    return 0;
}
