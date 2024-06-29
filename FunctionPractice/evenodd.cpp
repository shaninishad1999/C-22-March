#include<iostream>
using namespace std;
void isPrime(int x){
    if(x%2==0)

{
cout<<"even Number";
}
else
{
    cout<<"odd Prime";
}
}


int main(){
    int n;
    cout<<"Enter any number : ";
    cin>>n;
 isPrime(n);
    
} 