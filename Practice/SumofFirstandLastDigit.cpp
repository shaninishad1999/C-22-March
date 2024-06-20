#include<iostream>
using namespace std;
int main(){
    
    int n,first;
    cout<<"Enter number : ";
    cin>>n;

    int last=n%10;  //get the last digit

    while (n!=0)
    {
         first=n;
        n=n/10;
    }
    cout<<"First and last sum : "<<first+last;
    

}
