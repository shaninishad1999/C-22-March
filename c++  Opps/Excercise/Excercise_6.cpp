/* 6. Write a C++ program to create a class called Triangle that has private member variables for the lengths of its three sides.
Implement member functions to determine if the triangle is equilateral, isosceles, or scalene. */
#include <iostream>
using namespace std;

class Triangle
{
private:
    double length_1;
    double length_2;
    double length_3;

public:
    Triangle(double length_1, double length_2, double length_3)
    {
        this->length_1 = length_1;
        this->length_2 = length_2;
        this->length_3 = length_3;
    }

    void display()
    {
        if (length_1 == length_2 && length_2 == length_3)
        {
            cout << "Equilateral Triangle" << endl;
        }
        else if (length_1 == length_2 || length_1 == length_3 || length_2 == length_3)
        {
            cout << "Isosceles Triangle" << endl;
        }
        else
        {
            cout << "Scalene Triangle" << endl;
        }
    }
};

int main()
{

    double length_1, length_2, length_3;
    cout << "Enter lengths 3 Times" << endl;
    cin >> length_1 >> length_2 >> length_3;
    Triangle obj(length_1, length_2, length_3);
    obj.display();
}