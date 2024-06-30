#include<iostream>
using namespace std;
int rec(int n){
    if (n==0)
    {
        return 0;
    }
    rec(n-1);
    cout<<n<<"\t";  //tail recursion
    
}
int main(){
    int n;
    cout<<"Enter any number ";
    cin>>n;
    rec(n);

}