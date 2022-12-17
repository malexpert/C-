#include<iostream>
using namespace std;
int reverse(int n)
{int rem;
int rev=0;

while(n)
{ rem=n%10;
rev=rev*10+rem;
n/=10;
}
cout<<"reversed number is "<<rev;



}