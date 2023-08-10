#include <iostream>
using namespace std;
class A
{
    int a;

public:
    void Setdata(int a)
    {
         this->a = a;
    }
    void GetData(){
        cout<<"The Value of A is "<<a<<endl;

    }
};
 int   main()
{ A a;
a.Setdata(1);
a.GetData();

    return 0;
}

