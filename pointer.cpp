
#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int *p = &a;
    std::cout << "value of a" << a << endl;
    cout << "address of a " << endl
         << " " << p;
    *p = 30;
    cout << "value of a " << a << endl;
    return 0;
}