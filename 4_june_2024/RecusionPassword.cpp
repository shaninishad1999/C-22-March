#include<iostream>
using namespace std;
int rec(int n){
   
    if (n==0124)
    {
        return n;
    }
    else 
    {
        return 0;
    }
    
   
    cout<<n<<"\t";  //tail recursion
    
}
int main(){
    int n;
    cout<<"Enter Passward ";
    cin>>n;
   cout<<"psd= " <<rec(n);

}