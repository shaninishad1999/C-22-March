#include<iostream>
using namespace std;
int main(){
    int i,j;
    int n=65;
    for (int i = 1; i <=5 ; i++)
    {
        for (int  j = 1; j <=i; j++)
        {
            cout<<char(i+64);
            n++;
        }
        cout<<"\n";
        
    }
    
}