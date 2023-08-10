#include<iostream>
using namespace std;

int main(){
    int a=3;
    int*b=&a;
    b=&a;
    
    // &--->(adress of) opearator
    cout<<"the address of a is  "<<&a<<endl;
    cout<<"the address of a is  "<<b<<endl;
    // cout<<b;

    // // *---> (value at ) dereference operator
    // cout<<"the value at address b is "<<*b<<endl;

    // // pointer to pointer 
    // int ** c=&b;
    // cout<<"the address of b is "<<&b<<endl;
    // cout<<"the address of b is "<<c<<endl;
    // cout<<"the value of b is "<<*c<<endl;
    // cout<<"the value at address value at (valueat c) of b is "<<**c<<endl;

      
    return 0;
}

