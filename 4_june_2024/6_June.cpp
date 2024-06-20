#include<iostream>
using namespace std;
int main(){
    //pascal triangle
    // int n,num;
    // cout<<"Enter Number : ";
    // cin>>n;
    // for (int i = 0; i < n; i++)
    // {
    //     num=1;
    //     for ( int j = 0; j <n-i-1; j++)
    //     {
    //        cout<<" ";

    //     }
    //     for (int k = 0; k <=i; k++)
    //     {
    //         cout<<num<<" ";
    //         num=num*(i-k)/(k+1);
    //     }
        
        
    //     cout<<"\n";
    // }


// hallow ractangle
int i,j,k;
    for (int i = 1; i <=4; i++)
    {
        for (int j = 1; j <=4; j++)
        {
       
           if (i==1 || j==1 || i==4 || j==4)
           {
           cout<<"* ";
           }
           else
           {
            cout<<"  ";
           }
           
        }
        cout<<"\n";
        
    }
    
    
    
} 