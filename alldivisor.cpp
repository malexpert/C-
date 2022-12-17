#include<iostream>
using namespace std;
int divisor(int num)
{
    int i;
    for(i=1;i*i<num;i++)
    if(num%i==0)
    cout<<i;
    for( ;i>=1;i--)
    if(num%i==0)
    cout<<" "<<num/i;
return 0;
}



int  main()
{
    int num;
    cout<<"enter the number  ";
    cin>>num;
    cout<<"all divisor of entered number is ";
    divisor(num);
return 0;
}