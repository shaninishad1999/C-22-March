#include<iostream>
using namespace std;

void fact(int x)
{
    int k=1;
    for (int i = x; i>=1; i--)
    {
        k=k*i;
    
    }
cout<<"Factorial : "<<k;
    
}

int main(){

  int n;
  cout<<"Enter any Number  : ";
  cin>>n;
fact(n);
} 