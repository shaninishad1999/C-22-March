#include<iostream>
using namespace std;

void isArraySum(int *arr ,int k){

int sum=0,i;
for ( i = 0; i < k; i++)
{
    sum=sum+arr[i];
}

cout<<"Sum of array : "<<sum;

}

int main(){
    int n;
    cout<<"Enter array size : ";
    cin>>n;
    int arr[n];
    for (int i = 0; i <n ; i++)
    {
        cin>>arr[i];
    }

    isArraySum(arr, n);
    
} 