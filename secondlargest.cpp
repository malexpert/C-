#include<iostream>
using namespace std;
int secondl(int arr[],int n,int large,int secondlargest)
{
    int i;
   
    {
        if (arr[i]>large)

        {
            large=arr[i];
        }
        
    }
     for(i=0;i<n;i++)
     {
     if(arr[i]!=large)
     
     {
         if (arr[i]>secondlargest)
         secondlargest=arr[i];

     }}
     cout<<"largest value is "<<" "<<large;
     cout<<"second largest is "<<" "<<secondlargest;
return 0;

}





int main()
{
    int i;
    int arr[20],n;
    int large=1999;
    int secondlargest=10099;
cout<<"enter the last limit";
cin>>n;
cout<<"enter elements of array";
for(i=0;i<=n;i++)
cin>>arr[i];
secondl(arr,n,large,secondlargest);

 return 0;

}