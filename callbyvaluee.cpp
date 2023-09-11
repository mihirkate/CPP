#include <iostream>
using namespace std;

void changevalue(int *address)
{
    *address = 345;
}

int main()
{
    int a = 34, b = 74;
    cout << "the value of a now is" << a << endl;
    changevalue(&a);
    cout << "the value of a now is" << a << endl;
    return 0;
}
