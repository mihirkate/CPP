#include<iostream>
using namespace std;


int main()
{

    float bmi,w,h;
    cout<<"enter your weight"<<endl;
    cin>>w;

    cout<<"enter your height";<<endl;
    cin>>h;

    float kg=2.20;
    float height=0.39;
    float kilo=w*kg;
    float  un = h*hei;
    
bmi = (kilo*703)/(un*un);



if (bmi>25)
cout<<"overweight";
else if (bmi<25 && bmi>18)
cout<<"optimal";
 else (bmi<18)
 cout<<"underweight";

return 0;


}
