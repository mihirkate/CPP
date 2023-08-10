
/*
Author Name :- Mihir Kate
Date :- 08/02/2022
Topic :- arrays of object
*/
#include <iostream>
using namespace std;
class complex
{

public:
    int a;
    int b;
    void setdata(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void sum(complex o1, complex o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
        
    }
    void printnumber()
    {
        cout << "your   complex number is " << a << "+" << b << "i" << endl;
    }
    void printnumber1(){
         cout << "your total of  complex number is " << a << "+" << b << "i" << endl;
    }
};
int main()
{

    complex c1, c2, c3;// Declaring Objects of Class 

int m ,n;
int M,N;

    cout << "enter the number for c1" << endl;
    cin>>m>>n;
   
    cout << "enter the numbers for c2" << endl;
    cin>>M>>N;

    c1.setdata(m, n);
    c1.printnumber();

    c2.setdata(M, N);
    c2.printnumber();

    c3.sum(c1, c2);
    c3.printnumber();
    c3.printnumber1();

    return 0;
}