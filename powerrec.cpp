#include<iostream>
using namespace std;

int power(int a, int b)
{
    if (b==0)
    return 1;
    int temp=power(a,b/2);
    temp=temp*temp;
    if(b%2==0)
    return temp;
    else
    return temp*a;
}

int main()
{
    int a,b;
    cout<<"enter base";
    cin>>a;
    cout<<"enter power";
    cin>>b;
    cout<<power(a,b);
    return 0;
}