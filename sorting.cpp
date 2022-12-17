#include<iostream>
using namespace std;
void inserts(int arr[],int n)
{
    int i,temp,j;
    for(i=1;i<n;i++)
    {
        temp=arr[i];
        j=i-1;
        while(j>=0&&arr[j]>temp)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }cout<<"sorted array is";
   for(i=0;i<=n;i++)
cout<<arr[i]<<" ";

}


void main()
{
    int arr[10];
    int i,n;
    cout<<"enter last limit ";
    cin>>n;
    cout<<"enter elements of array";
    for(i=0;i<=n;i++)
    {cin>>arr[i];
    }
    inserts(arr,n);
}
