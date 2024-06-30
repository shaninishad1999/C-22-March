#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter array size \n";
  cin>>n;

  int arr[n],i;
  cout<<"array element\n";
  for (int i = 0; i <n; i++)
  {
    cin>>arr[i];
  }
  cout<<"store element\n";
  for (int i = 0; i <n; i++)
  {
    cout<<arr[i]<<"\t";
  }
 int mx=arr[0];
  for ( i = 0; i <n; i++)
  {
    if (arr[i]>mx)
    {
        mx=arr[i];
    }
    
  }
    cout<<"\nLargest = "<<mx<<"\t";
    
} 