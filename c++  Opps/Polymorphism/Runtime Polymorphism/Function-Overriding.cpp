#include <iostream>
using namespace std;

// Parent class A
class A {
public: 
    void show(){
        cout << "Parent Class" << endl;
    }
};

// Child class B inheriting from class A
class B: public A {
public: 
    void show(){
        cout << "Child Class" << endl;
    }
};

int main() {
    B b;
    b.show(); // Will output "Child Class" because B overrides show() method
    
    // To call the show() method from parent class A, you can do:
    b.A::show(); // This will output "Parent Class"
    
    return 0;
}
