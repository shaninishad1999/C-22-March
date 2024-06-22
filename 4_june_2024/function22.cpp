#include<iostream>
using namespace std;
void  tbl(int a,int b)
{
  for(int i=a;i<=b;i++)
  {
    if(i%2==0)
    {
        cout<<i<<"\t";
    }
  }
}
int main(){
    int a,b;
    cout<<"Enter start   Number : ";
    cin>>a;
    cout<<"Enter end   Number : ";
    cin>>b;
  tbl(a,b);
 
}
