#include<iostream>
using namespace std;
int main(){
    //
    int a[]={20,10,5,8,4,2,4};
    int s=sizeof(a)/sizeof(a[0]);
    cout<<s<<"\n";
    for (int i = 0; i <s; i++)
    {
      cout<<a[i]<<"\t";
    }

    


    
}