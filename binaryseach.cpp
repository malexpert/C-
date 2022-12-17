#include<iostream>
using namespace std;
int binary(int arr[],int n, int num,int high,int low)

{ int i;
    
    for(i=0;i<n;i++)
    {
    int mid=high+low;

 if (num==arr[mid])
 {
     cout<<"element is in position"<<mid;
break;
 }
if(arr[mid]>num)

    high=mid-1;

else

    low=mid+1;

    }
return 0;

}

int main()

{ 
      int num;
    int i;
    int arr[10];
    int n;
    int high=n-1;
    int low=0;
    cout<<"enter last limnit of array";
    cin>>n;
    cout<<"enter elements of array";
    for ( i = 0; i < n; i++)
    {
       cin>>arr[i];

    }
    cout<<"enter number to be searched";
    cin>>num;
      binary(arr,n,num,high,low);
  return 0;
}
