#include <iostream>
using namespace std;
int merge(int arr1[],int arr2[],int arr3[],int n1,int n2,int index)
{
    int m=n1+n2;
    int i;
    for(i=0;i<n1;i++)
    {
        arr3[index]=arr1[i];
        index++;

        
    }
    for(i=0;i<n2;i++)
    {
        arr3[index]=arr2[i];
        index++;

    }
    cout<<"merged array is ";
for ( i = 0; i<m; i++)
{
    cout<<" "<<arr3[i]<<" ";
}

cout<<"merged array in reverse order is ";
for(i=m-1;i>-1;i--)
{
    cout<<arr3[i]<<" ";
}
return 0;
}







int main()
{
    int arr1[10],arr2[10],arr3[10];
    int n1,n2;
    int i;
    int index=0;
    cout<<"enter limits of both the array ";
    cin>>n1>>n2;
    cout<<"enter elements of first array ";
    for(i=0;i<n1;i++)
    {
        cin>>arr1[i];
    }
    cout<<"enter elements of second array ";
    for(i=0;i<n2;i++)
    {
        cin>>arr2[i];
    }
    merge(arr1,arr2,arr3,n1,n2,index);

    return 0;
}
