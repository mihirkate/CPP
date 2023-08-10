#include <iostream>
using namespace std;

void add()
{
    int a;
    int b;

    cout << "enter first number " << endl;
    
    cin >> a;
    cout << "enter secind number " << endl;
    cin >> b;
    cout << "the Addition  of two numbers is " << a + b << endl;
}
void sub()
{
    int a;
    int b;

    cout << "enter first number " << endl;
    cin >> a;
    cout << "enter secind number " << endl;
    cin >> b;
    cout << "the subtraction  of two numbers is " << a - b << endl;
}
void mul()
{
    int a;
    int b;

    cout << "enter first number " << endl;
    cin >> a;
    cout << "enter secind number " << endl;
    cin >> b;
    cout << "the multiplication  of two numbers is " << a * b << endl;
}
void div()
{
    float a;
    float b;

    float sum = a / b;

    cout << "enter first number " << endl;
    cin >> a;
    cout << "enter secind number " << endl;
    cin >> b;
    cout << "the div  of two numbers is " << sum << endl;
}

int main()
{

    // add();
    // sub();
    // mul();
    // div();

    cout << " " << endl;
    cout << "    Welcome to my digital calculator." << endl;
    cout << " " << endl;

    cout << " 1 for addition\n 2 for subtraction\n 3 for multiplication\n 4 for divsion" << endl;
    // cout<<"2 for subtraction"<<endl;
    // cout<<"3 for multiplication"<<endl;
    // cout<<"4 for divsion"<<endl;

    cout << " " << endl;
    int user;
    cout << "Which prefer calculator:" << endl;
    cin >> user;

    switch (user)
    {
    case 1:
        add();
        break;
    case 2:
        sub();
        break;
    case 3:
        mul();
        break;  
    case 4:
        div();
        break;

    default:
        cout << "you chooes no is invalid.";
        break;
    }

    return 0;
}