#include<iostream>
using namespace std;
int search(int arr[],int n,int num)
{   
    
    int i;
  for ( i = 0; i < n; i++)
  {
      if (arr[i]==num)
      cout<<" number is in position "<<i+1;
      
 else 
cout<<"number is not in array";
break;
  }
 

  return 0;


}





int main()

{ 
      int num;
    int i;
    int arr[10];
    int n;
    cout<<"enter last limnit of array";
    cin>>n;
    cout<<"enter elements of array";
    for ( i = 0; i < n; i++)
    {
       cin>>arr[i];

    }
    cout<<"enter number to be searched";
    cin>>num;
      search(arr,n,num);
  return 0;
}