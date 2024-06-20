#include<iostream>
using namespace std;
int main(){

    int a[]={1,6,0,2,3,0}; //
    int n=sizeof(a)/sizeof(a[0]);
    int temp;
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<"\t";
    }
    cout<<"\nsorted data\n";

    for (int i = n; i >=0; i--)
    {
        cout<<a[i]<<"\t";
    }