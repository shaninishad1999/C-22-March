#include<iostream>
using namespace std;

int main(){

//     const int a=90;+
// //    int a=helllo;
//     cout<<a;
//     cout<<" \\n done ";


// Arithmetic operator+,-,*,/,%
 
// int a=5;
// int b=5;
// cout<<a+b<<endl;


int a;

cout<<"Enter 3 digit number : ";
cin>>a;    ///534
// int b=a/100; //5
// int c=a%100;   // 34
// int d=c/10;   //3
// int e=c%10;  //4
// cout<<b+d+e;

// b=a/100;  //b=5
// c=(a%100)/10;   //3
// d =a%10; 
// cout<<b+c+d;

a=a/100+(a%100)/10+a%10;
cout<<a;

}