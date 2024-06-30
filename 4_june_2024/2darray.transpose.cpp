#include<iostream>
using namespace std;
int main(){

    // int a[3][2]={1,2,3,4,5,6};   
    int a[3][2];
    cout<<"Enter 6 value\n";
       for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin>>a[i][j];
        }
    //    cout<<"\n"; 
    }
    int sum=0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            
         
           cout<<a[i][j]<<"\t";
        }
       cout<<"\n"; 
    }
    

     
    //  wap to print the sum of the values of 2d;
    // wap to replace 1 by 0 in 2d array
} 