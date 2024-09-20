/* 1. Write a C++ program to implement a class called Circle that has private member variables for radius.
 Include member functions to calculate the circle's area and circumference. */
 
#include <iostream>
using namespace std;

class Circle
{
private:
    double radius;

public:
    Circle(double radius)
    {
        this->radius = radius;
    }

    double area()
    {
        return 3.14 * radius * radius;
    }

    double circumference()
    {
        return 2 * 3.14 * radius;
    }
};

int main()
{
    double r;
    cout << "Enter Radius: ";
    cin >> r;

    Circle obj(r);

    cout << "Area = " << obj.area() << endl;
    cout << "Circumference = " << obj.circumference() << endl;

    return 0;
}
