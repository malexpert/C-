#include<iostream>
using namespace std;
int fact(int n)
{
    if (n==0)
    return 1;
    else
    return n* fact(n-1);

}



int main()
{
    int n;
    cout<<"enter a number you want factorial of";
    cin>>n;
    cout<<"factorial of the given number is "<<fact(n);
    return 0;
}