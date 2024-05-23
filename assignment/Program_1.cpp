// 1. Write a  program to find maximum between two numbers.

#include<iostream>
using namespace std;
int main(){

    //data type declaration
    float num1,num2;
    cout<<"Enter Two Number :"<<endl;    //message for display
    cin>>num1>>num2;         //taking input from user

    if (num1>num2)      //compare value num1 & num2
    {
        cout<<"Num1 is Greater : "<<num1;

    }
    else
    {
        cout<<"Num2 is Greater : "<<num2;
    }
   
    
    
}