#include<iostream>
using namespace std;
int main(){

  int i,j,m;
  cout<<"Enter size ";
  cin>>m;
int n=0;
  for (int i = 1; i <=m ; i++)
  {
    for (j = 1; j <=m; j++)
    {
       cout<<" ";
    }
    
    for (int k = 1; k <=m; k--)
    {
        
        cout<<k<<" ";
    }
    cout<<"\n";
    
  }
  

} 