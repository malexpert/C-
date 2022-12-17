#include<iostream>
using namespace std;
bool isprime(int n)
{ 
    if (n==0)
return false;
for(int i=2;i*i<=n;i++)
{
    if(n%i==0)
return false;
}
return true;

}

int main()
{int n;
cout<<"enter number to be checked";
cin>>n;
//cout<<isprime(n);
printf("%s", isprime(n) ? "true" : "false");

}