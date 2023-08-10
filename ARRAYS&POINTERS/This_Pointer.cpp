#include<iostream>
using namespace std;
 class Test {
    string   i;
    
    public:
    //   void setValue(int x)
    // {
    //     i=x;
    // }

      int setValue(string   i)
    {
        i=i;
        
    }

     void show()
     {
         cout<<i;
     }

};

int  main(){
    Test t;
    
    t.setValue("k");
    t.show();
    return 0;

    
}