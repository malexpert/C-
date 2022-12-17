#include<iostream>
using namespace std;
int prime(int n)
{
    if(n==1)
    return 0;
    if(n==2||n==3)
    return 1;
    if(n%2==0||n%3==0)
    return 0;
    for (int i = 5; i*i <=n ; i=i+6) 
 {if(n%i==0||n%(i+2)==0)
 return 0;
 }
 
 return 1;

    
    
}

int main()
{


    int n;
    cout<<"enter number to be checked ";
    cin>>n;
   if (prime(n)==1)
   cout<<"true";
   else
   cout<<"false";
return 0;
}