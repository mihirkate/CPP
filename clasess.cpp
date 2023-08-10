/*
Author Name :- Mihir Kate
Date :- 03/02/2022
Topic : classes ,  piblic and private
*/
#include <iostream>
using namespace std;
class employee
{
private:
    int a, b, c;

public:
    int d, e;
    void setdata(int a1, int b1, int c1);
    void getdata()
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
        cout << "The value of c is " << c << endl;
        cout << "The value of d is " << d << endl;
        cout << "The value of e is " << e << endl;
    }
};
void employee ::setdata(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    employee mihir;
    mihir.d = 12;
    mihir.e = 127;
    mihir.setdata(1, 2, 3);
    mihir.getdata();

    employee k;
    k.d = 123;
    k.e = 26;
    k.setdata(4, 5, 6);
    k.getdata();

    return 0;

    
}

