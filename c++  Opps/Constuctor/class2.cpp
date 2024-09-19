#include<iostream>
using namespace std;

class A {
    int a, b;  // Member variables

public:
    // Default constructor that initializes member variables
    // A() {
    //     a = 0;
    //     b = 0;
    //     cout << "This is the default constructor" << endl;
    // }
    A(int a,int b) {
    this->a=a;
    this->b=b;
        cout << "This is the parameterized constructor" << endl;
    }

    // Method to display the values of a and b
    void display() {
        cout << "Value of a: " << a << ", Value of b: " << b << endl;
    }

};

int main() {
    A obj(10,20);  // Correct way to instantiate the object of class A
    obj.display();  // Call the display method to show values of a and b

    return 0;
}
