#include <iostream>
using namespace std;

// // using two arguments
// int sum(int a ,int b)
// {
//     return(a+b);

// }
// // using three arguments
// int add( )
// {int a,int b,int c
    
//     return (a+b+c);

// }
// int main(){

//     cout<<"the sum of 5 and 7 is "<<sum(5,7)<<endl;
//     cout<<"the sum of 5 ,7,9 is "<<add(5,7,9)<<endl;

//     return 0;
// }

//  ******** Find the area of circle,square using function overloading *****
int area(double r)
{
    return (3.14 * r * r);
}
int square(double s)
{
    return (s * s);
}
int rect(double l, double w, double h)
{
    return (l * w * h);
}
int main()
{
    double r;
    double s;
    double l;
    double w;
    double h;
    // int user;

    cout << "Enter the radius for circle " << endl;
    cin >> r;

    cout << "Enter the sides for square" << endl;

    cin >> s;
    cout << "Enter the length,width,breadth  for for rectangle " << endl;

    cin >> l >> w >> h;

    

    // switch (user)
    // {
    // case circle:
        cout << "the area  of circle,having radius  " << r << "  is " << area(r) << endl;
        // break;

    // case square:

      
  cout << "the area of square,having sides " << s << " is " << square(s) << endl;
    //    break ;
    // case rectangle:

        cout << "the area of  rectangle ,having length  " << l << " width " << w << " height " << h << " is " << rect(l, w, h) << endl;
        // default :
        // cout<<"your input is invalid "<<endl;

    // }

    return 0;
}