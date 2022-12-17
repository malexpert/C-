#include<iostream>
using namespace std;


int simplelcm(int a,int b)
{ 
    int num=max(a,b);
    while(true)
if(a%num==0 && b%num==0)
return num;
 
num++;

return 0;
}



int main()
{
    int a,b;
    cout<<"enter both the numbers whose lcm is req ";
    cin>>a>>b;
   cout<<simplelcm(a,b);
   return 0;
}



