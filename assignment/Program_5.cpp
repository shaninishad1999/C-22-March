//5. Write a  program to check whether a number is even or odd.

#include<iostream>
using namespace std;
int main(){

    //data type declaration
    int number;
    cout<<"Enter  Number :"<<endl;    //message for display
    cin>>number;         //user input

    if (number%2==0)      //Condition for even and odd number
    {
        cout<<"Number is Even : "<<number;

    }
    else
    {
        cout<<"Number is Odd : "<<number;
    }
   
    
    
}