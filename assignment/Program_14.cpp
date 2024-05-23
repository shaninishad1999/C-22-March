// 14. Write a  program to input angles of a triangle and check whether triangle is valid or not.
#include <iostream>
using namespace std;

int main()
{
    // data type and variable declaration
    int a, b, c;

    // Input angles of the triangle
    cout << "Enter Angles of Triangle : " << endl;
    cin >> a >> b >> c;

    // condition for angle
    if (a + b + c == 180 && a > 0 && b > 0 && c > 0)
    {
        cout << "Triangle is valid." << endl;
    }
    else
    {
        cout << "Triangle is not valid." << endl;
    }

    return 0;
}
