#include <iostream>

using namespace std;

int main()
{   /*  */
int a,b,c;
cout<<"enter the value of a :"<<endl;
cin>>a;
  cout<<"enter the value of b :"<<endl;
    cin>>b;
     c=a+b; 
     cout<<"the sum   is"<<c<<endl;
     cout<<"the global c   is"<<::c;

    /* ******built In data types********/   


    float d = 34.4F;       /* "f" ashya karta  lavla ahe ki to ek floating  varibable ahe */
    long double e = 34.4L; /* "l" ashya karrita lavlla ahe ki to ek long double variable ahe */
                           /* jar f ne nahi represent kela tr to mg by default it will treat as long double 
                      je koni deciimal madhye ahet*/
    cout << endl;
    cout << "The size of 34.4 is " << sizeof(34.4) << endl;
    cout << "The size of 34.4f is " << sizeof(34.4f) << endl;
    cout << "The size of 34.4F is " << sizeof(34.4F) << endl;
    cout << "The size of 34.4l is " << sizeof(34.4l) << endl;
    cout << "The size of 34.4L is " << sizeof(34.4L) << endl;

    /**********Rference variable ********/
    //rohandas ---->rohu--->monty--->dangeous coder----
    cout << endl;
    /* jasa rohandas la ghar rohu monty boltat tasach x =455 tr ahech but y=455 pn ahe
          naaav veg vegle pn no. is ekach i.e 455 ani yalach reference variable mhantat */

    float x = 455;
    float &y = x;
    cout << x << endl;
    cout << y << endl;

/**********Typecasting  ********/
int a=45;
cout<<"the value  of a is "<<(float)a<<endl;

float b=45.46;
cout<<"the value  of b is "<<(int)b<<endl;
cout<<"the value  of b is "<<int(b)<<endl;

int c=int(b);
cout<<"The expression is "<<a+b<<endl;
cout<<"The expression is "<<a+int(b)<<endl;
cout<<"The expression is "<<a+(int)b<<endl;

    return 0;
}
 
  