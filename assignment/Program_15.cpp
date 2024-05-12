//15. Write a  program to input all sides of a triangle and check whether triangle is valid or not.

#include<iostream>
using namespace std;
 int main(){
    
    //data type delcaration
    int a,b,c;
    cout<<"Enter Angle of Triangle : "<<endl;   // message for display
    cin>>a>>b>>c;                               //user input

    if ((a+b+c)==180)          //codition for triangle
    {
        cout<<"It is a triangle : "<<(a+b+c);
    }
    else
    {
        cout<<"Please Enter valid input for triangle";
    }
    
} 
