
#include<iostream>
using namespace std;

int main()
{
    int user;
    cout<<"enter how you are feeling"<<endl;
    cout<<"1- for nice "<<endl;
    cout<<"2- for not feeling nice "<<endl;

    cin>>user;


    

 
switch (user)
{
case 1:
cout<<"how are you "<<endl;

    break;

case 2:
cout<<"you are true mad "<<endl;
break;

default:
cout<<"your input is invalid"<<endl;

    break;
}
return 0;

}  