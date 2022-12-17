#include<iostream>
using namespace std;
int main()
{
    int arr[20];
    int n;
    int pos;
    int i;
    int num;
    cout<<"enter the number to be inserted";
    cin>>num;
    cout<<"enter last limit";
    cin>>n;
    cout<<"enter elements";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
cout<<"enter pos at which number is to be inserted";
cin>>pos;
for(i=0;i>=pos;i--)
arr[i+1]=arr[i];
arr[pos]=num;
n++;

cout<<"array after insertion is ";
for(i=0;i<n+1;i++)
{
    cout<<" "<<arr[i]<<" ";
}

return 0;



}
