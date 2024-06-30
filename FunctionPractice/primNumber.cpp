#include<iostream>
using namespace std;
void isPrime(int n){

 int i,j,count=0;
 for (int i = 1; i <=5; i++)
 {
    count=0;
    for (int j = 2; i <=n/2; i++)
    {
       count++;
    }
    
 }
 if (count==0)
 {
    cout<<"Prime Number";
 }
 else
 {
    cout<<"Not Prime Number";
 }
 
 
}

int main(){
    int n;
    cout<<"Enter any number : ";
    cin>>n;
    isPrime(n);

} 