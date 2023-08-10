#include <iostream>
using namespace std;
class Bankdeposit
{
    int principal;
    int years;
    float interestrate;
    float returnvalue;

public:
    Bankdeposit(){}
    Bankdeposit(int p, int y, float r);
    Bankdeposit(int p, int y, int r);
    void show();
};
Bankdeposit::Bankdeposit(int p, int y, float r)
{

    principal = p;
    years = y;
    interestrate = r;
    returnvalue = principal;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + interestrate);
    }
    // Bankdeposit::Bankdeposit(int p, int y, int r)
    // {

    //     principal = p;
    //     years = y;
    //     interestrate = float(r) / 100;
    //     returnvalue = principal;
    //     for (int i = 0; i < y; i++)
    //     {ssss
    //         returnvalue = returnvalue * (1 + interestrate);
    //     }
    // }
    // void Bankdeposit::show();
    {

        cout << endl
             << "pricipal amount was " << principal
             << "return value after " << years
             << "years is " << returnvalue << endl;
    }
    int main()
    {
        Bankdeposit b1,b2,b3;
        
        int p,y;
        float r;
        int R;


        return 0;
    }