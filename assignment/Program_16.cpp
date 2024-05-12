//16. Write a  program to check whether the triangle is equilateral, isosceles or scalene triangle.


#include<iostream>
using namespace std;
 int main(){
    
    //data type delcaration
    int a,b,c;
    cout<<"Enter Angle of Triangle : "<<endl;   // message for display
    cin>>a>>b>>c;                               //user input

    if (a==b==c==60 )          //codition for equilateral triangle
    {
    
        cout<<"It is a triangle : ";
    }
    else if ((a==b!=c)==180)          //codition for isosceles triangle
    {
        cout<<"Please Enter valid input for triangle";
    }
    else if ((a!=b!=c)==180)          //codition for scalene triangle
    {
        cout<<"Please Enter valid input for triangle";
    }
  
  
    
} 
