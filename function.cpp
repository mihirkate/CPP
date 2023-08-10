/*
Author Name :- Mihir Kate
Date :- 28/01/2022
Topic :- Function calling and prototype.
*/

#include <iostream>
using namespace std;

//function  prototype
//  int sum(int a, int b); //--> accept
//  int sum(int a,b); //--> not accept
//  int sum(int ,int); //--> accept
//  void dm(void);//--> accept
//  void dm();//--> accept



// void add()  //no return type.
// {
//     int a;
//     int b;

//     cout << "enter first number " << endl;
//     cin >> a;
//     cout << "enter secind number " << endl;
//     cin >> b;
//     cout << "the addition of two numbers is " << a + b << endl;
// }
class student {
    public: 
  void sub()   //no return type.
{
    int a;
    int b;

    cout << "enter first number " << endl;
    cin >> a;
    cout << "enter secind number " << endl;
    cin >> b;
    cout << "the subtraction  of two numbers is " << a - b << endl;
}
};
int main()
{
  
   student mihir;
                                                                                 mihir;

   mihir.sub();  //function calling without parameter.
    // add();  //function calling without parameter.
    //  cout<<"this is something new "<<endl;
    return 0;
}


// a/ddition subtraction multiplcation divsion
