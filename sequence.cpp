#include <iostream>
using namespace std;
lo      
int main()
{
    int age;
    cout << "Tell me  your age " << endl;
    cin >> age;

   /*18 if ((age < 18) && (age >0)){
         cout << "you  cannot come to party  " << endl;
    }
    else if(age==18){
        cout<<"YOu are kid and get kid pass"<<endl;

    }
    else if(age<1){E 
        cout<<"you are not born "<<endl;
    }
    else{
        cout<<" You can come to the party  "<<endl;

    }*/

    //*  switch case*/
    switch (age)
    {
    case 18:
        cout<<"you are 18"<<endl;

        break;
    case 22:
        cout<<"you are 22"<<endl;

        break;
    case 2:
        cout<<"you are 18"<<endl;

        break;
    
    default:
    cout<<" no special cases "<<endl;

        break;
    }
    

    return 0;

    
}


