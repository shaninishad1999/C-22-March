/* 10. Write a C++ program to implement a class called Shape with virtual member functions for calculating area and perimeter.
Derive classes such as Circle, Rectangle, and Triangle from the Shape class and override virtual functions accordingly.
 */
#include <iostream>
using namespace std;
#include <cmath> // For M_PI and sqrt function

// Base class Shape
class Shape
{
public:
    // Virtual functions for area and perimeter
    virtual double area() = 0;
    virtual double perimeter() = 0;
};

// Derived class Circle
class Circle : public Shape
{
private:
    double radius;

public:
    // Constructor to initialize radius
    Circle(double radius)
    {
        this->radius = radius;
    }

    // Override area function for Circle
    double area() override
    {
        return M_PI * radius * radius;
    }

    // Override perimeter function for Circle
    double perimeter() override
    {
        return 2 * M_PI * radius;
    }
};

// Derived class Rectangle
class Rectangle : public Shape
{
private:
    double length, width;

public:
    // Constructor to initialize length and width
    Rectangle(double length, double width)
    {
        this->length = length;
        this->width = width;
    }

    // Override area function for Rectangle
    double area() override
    {
        return length * width;
    }

    // Override perimeter function for Rectangle
    double perimeter() override
    {
        return 2 * (length + width);
    }
};

// Derived class Triangle
class Triangle : public Shape
{
private:
    double side1, side2, side3;

public:
    // Constructor to initialize sides of the triangle
    Triangle(double side1, double side2, double side3)
    {
        this->side1 = side1;
        this->side2 = side2;
        this->side3 = side3;
    }

    // Override area function for Triangle (using Heron's formula)
    double area() override
    {
        double s = (side1 + side2 + side3) / 2;
        return sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }

    // Override perimeter function for Triangle
    double perimeter() override
    {
        return side1 + side2 + side3;
    }
};

int main()
{
    // Create objects of Circle, Rectangle, and Triangle
    Shape *circle = new Circle(5.0);
    Shape *rectangle = new Rectangle(4.0, 6.0);
    Shape *triangle = new Triangle(3.0, 4.0, 5.0);

    // Display the area and perimeter of Circle
    cout << "Circle Area: " << circle->area() << endl;
    cout << "Circle Perimeter: " << circle->perimeter() << endl;

    // Display the area and perimeter of Rectangle
    cout << "Rectangle Area: " << rectangle->area() << endl;
    cout << "Rectangle Perimeter: " << rectangle->perimeter() << endl;

    // Display the area and perimeter of Triangle
    cout << "Triangle Area: " << triangle->area() << endl;
    cout << "Triangle Perimeter: " << triangle->perimeter() << endl;

    // Clean up dynamically allocated memory
    delete circle;
    delete rectangle;
    delete triangle;

    return 0;
}
