// wap  to swaping of two values
#include<iostream>
using namespace std;

int main(){

int a,b,temp;

cout<<"Enter Two number : ";
cin>>a>>b;

cout<<"Before swap a = "<<a;   //45   ,10
cout<<"\nBefore swap b = "<<b;   //12  ,20

//optimize code
 a=a+b;  //a=30                 not optimse code  // temp=a;  //temp=45   
 b=a-b;  //b=10                 not optimse code  // a=b;    //a=12
 a=a-b;  //20                  not optimse code  // b=temp;   // b=45

cout<<"\nafter swap a = "<<a;
cout<<"\nafter swap b = "<<b;

}