#include<iostream>
using namespace std;
int main(){

    int age;

    cout<<"enter your age"<<endl;
    cin>>age;

    
    switch (age)
    {
    case 18 :

    cout<<"Your age is 18"<<endl;
        
        break;
    case 25 :

    cout<<"Your age is 25"<<endl;
        
        break;
    case 30 :

    cout<<"Your age is 30"<<endl;
        
        break;
    
    default:

    cout<<"no is invalid";
        break;
    }
    
    return 0;
}