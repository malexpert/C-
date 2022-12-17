#include<iostream>
using namespace std;
 int power(int a,int b)
 {
     int m=1;
     for(int i=1;i<=b;i++)
     {
        m=m*a;
     }
     return m;
 }

 int main()
 {
     int a,b;
     cout<<"enter base ";
     cin>>a;
     cout<<"enter power";
     cin>>b;
     cout<<power(a,b);
     return 0;
 }