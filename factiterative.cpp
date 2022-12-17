#include<iostream>
using namespace std;

int main()
{
    int i,n;
int m=1;
cout<<"enter a no. to find factorial of ";
cin>>n;
for(i=n;i>1;i--)
{
m=m*i;
}
cout<<"factorial of given number is "<<m;



return 0;
}
