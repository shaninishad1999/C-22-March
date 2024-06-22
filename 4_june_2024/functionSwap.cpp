#include<iostream>
using namespace std;
void  swp(int a,int b)
{
    int temp=a;
    a=b;
    b=temp;
    cout<<"a= "<<a;
    cout<<"\nb= "<<b;
}
int main(){
    int a,b;
    cout<<"Enter Two Number : ";
    cin>>a>>b;
  swp(a,b);
 
}
