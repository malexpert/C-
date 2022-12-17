#include <iostream>
using namespace std;
int eulgcd(int a, int b)
{
    while (a != b)
    {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    return a;
}
33

    int
    main()
{
    int a, b;
    cout << "enter first number ";
    cin >> a;
    cout << "enter second number ";
    cin >> b;
    cout << eulgcd(a, b);
}