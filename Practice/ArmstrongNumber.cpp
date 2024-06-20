#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"Enter Number :";
    cin>>n;  //153
    int temp=n;

    while (n!=0)
    {
        int digit=n%10;  //3
        sum=sum+(digit*digit*digit);
        n=n/10;   //15
    }
    if (temp==sum)
    {
        cout<<"Armstrong number";
    }
    else
    {
        cout<<"not armstrong number";
    }
    
    
}