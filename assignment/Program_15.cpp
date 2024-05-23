// 15. Write a  program to input all sides of a triangle and check whether triangle is valid or not.

#include <iostream>
using namespace std;
int main()
{

    // data type and variable declaration
    int a, b, c;
    cout << "Enter Angle of Triangle : " << endl; // message for display
    cin >> a >> b >> c;                           // taking input from user

    // codition for triangle
    if (a + b > c && b + c > a && c + a > b )
    {
        cout << "It is a Valid triangle ";
    }
    else
    {
        cout << "It is not valid input for triangle";
    }
}
