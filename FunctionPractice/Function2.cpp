#include<iostream>
using namespace std;
void isPrime(int x){
    if(x%2==0)

{
cout<<"Prime Number";
}
else
{
    cout<<"Not Prime";
}
}


int main(){
    int n;
    cout<<"Enter any number : ";
    cin>>n;
 isPrime(n);
    
} 