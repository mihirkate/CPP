#include <iostream>
using namespace std;
class simple
{
    int data1;
    int data2;
    int data3;

public:
    simple(int a, int b, int c=8)
    { /*if b=3 or any number alloted to b 
then in the output the updated version of b will be displayed
same goes with a & c  */

        data1 = a;
        data2 = b;
        data3 = c;
    }
    void printdata();
};

void simple::printdata()
{
    cout << "the value of data 1,data 2 and data 3 is " << data1 << "," << data2 << "," << data3 << "  respectively" << endl;
};

int main()
{
    simple s(1, 4);
    s.printdata();


    return 0;
}
