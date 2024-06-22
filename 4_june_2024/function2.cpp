#include<iostream>
using namespace std;
int marks()  //taking nathing return something
{
    return 9;
}
int product(int qty) // taking something and return something
{
    return qty*50;
}

int main(){
int c=product(200);
cout<<marks()<<endl;
cout<<"bill = "<<c;
} 
