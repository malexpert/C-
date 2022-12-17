#include<iostream>
using namespace std;
int trailingzeroes(int n)
{int rev=0;
int i;
for (i=5;i<=n;i=i*5)
{
rev=rev+n/i;

}
return rev;
}




int main()
{
int n;
cout<<"enter number the number whose factorial's trailing zeros you want to know.";
cin>>n;
cout<<"number of trailing zeroes are "<<trailingzeroes(n);

return 0;

}