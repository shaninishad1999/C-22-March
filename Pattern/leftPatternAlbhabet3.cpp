#include<iostream>
using namespace std;
int main(){
    int i,j;
    char  ch='A';
    for (int i = 1; i <=5 ; i++)
    {
        for (int  j = 1; j <=i; j++)
        {
            cout<<ch<<" ";
            ch++;
        }
        cout<<"\n";
        
    }
    
}