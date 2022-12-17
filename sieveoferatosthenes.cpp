#include<iostream>
#include<limits.h>
using namespace std;

void sieve (int n)
{
   if(n<=1)
   return;
   bool isprime[n+1];

    fill( isprime,isprime+n+1,true);

    for(int i=2;i*i<=n;i++)
    {
        for(int j=i*i;j<=n;j=j+i)    //2*i
        {
            isprime[j]=false;
        }
    }
for(int i=2;i<=n;i++)
{
    if(isprime[i])
    cout<<i<<" ";

}
}

int main()
{ int n;
cout<<"enter number to be checked";
cin>>n;
sieve(n);



}