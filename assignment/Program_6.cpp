//6. Write a  program to check whether a year is leap year or not.

#include<iostream>
using namespace std;
int main(){

    //data type declaration
    int year;
    cout<<"Enter  Year :"<<endl;    //message for display
    cin>>year;         //user input

    if ((year%4==0 && year!=100)|| year%400==0)      //Condition for leap year
    {
        cout<<"Enter Year is  Leap Year : "<<year;

    }
    else
    {
        cout<<"Enter Year is Not Leap Year : "<<year;
    }
   
    
    
}