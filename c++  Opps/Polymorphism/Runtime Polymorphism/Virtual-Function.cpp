#include <iostream>
using namespace std;

class A {
public:
    // Pure virtual function, making A an abstract class
    virtual void display() = 0; 
};

class B : public A {
public:
    // Overriding the display method in the derived class B
    void display() override {
        cout << "This is called from the child class" << endl;
    }
};

int main() {
    B obj; // Creating an object of class B
    obj.display(); // Calls the overridden display() in class B

    // obj.A::display(); // This will cause an error because A::display is pure virtual

    return 0;
}
