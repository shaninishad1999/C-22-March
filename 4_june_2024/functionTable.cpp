#include<iostream>
using namespace std;
void  tbl(int a)
{
int i;
    for( i=1;i<=10;i++)
    {
     cout<<i*a<<endl;
    }
}
int main(){
    int a;
    cout<<"Enter  Number : ";
    cin>>a;
  tbl(a);
 
}
