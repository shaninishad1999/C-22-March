#include<iostream>
using namespace std;

void maxValue(int arr[])
{
 int mx=arr[0];
   for (int i = 0; i <5; i++)
   {
      if (arr[i]>mx)
      {
        mx=arr[i];
      }
      
   }
   cout<<"Max value = "<<mx;
   
}


int main(){
    int arr[]={15,5,6,8,7};
    maxValue(arr);



    
} 