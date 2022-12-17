#include<iostream>
using namespace std;
int check(int n)
{
    
    int rev=0; 


while(n!=0)
{
int rem=n%10;
rev=rev*10+rem;
n=n/10;
}
return rev;
} 

int main()
{
    int n;
    cout<<" enter the no, to be checked";
    cin>>n;
   
    if (n==check(n))
    cout<<"entered no. is palindrome no.";
 return 0;

}
