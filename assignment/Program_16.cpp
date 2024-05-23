// 16. Write a  program to check whether the triangle is equilateral, isosceles or scalene triangle.

#include <iostream>
using namespace std;
int main()
{

    // data type declaration
    int a, b, c;
    cout << "Enter Angle of Triangle : " << endl; // message for display
    cin >> a >> b >> c;                           // taking input from user

    if (a == b && b == c && c==a) // condition for equilateral triangle
    {

        cout << "It is a equilateral triangle : ";
    }
    else if ((a == b || a == c || b == c) ) // condition for isosceles triangle
    {
        cout << "It is a isosceles triangle : ";
    }
    else             // other these are  scalene triangle
    {
        cout << "It is a scalene triangle : ";
    }
  
}
