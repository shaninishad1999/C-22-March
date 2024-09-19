#include <iostream>
using namespace std;

class A {
protected:
    string name;
    int age;
    double sal;

public:
    A() {
        name = "null";
        age = 0;
        sal = 0.0;
    }

    // Example function to set values in class A
    void setData(string name, int age, double sal) {
        this->name = name;
        this->age = age;
        this->sal = sal;
    }

    void showData() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Salary: " << sal << endl;
    }
};

// Correct inheritance syntax using :
class B : public A {
    // Class B can access protected members of A
public:
    void showInfo() {
        // Accessing members of class A through inheritance
        showData();
    }
};

int main() {
    B obj;
    obj.setData("Shanideval", 25, 50000.0); // Set data for the object
    obj.showInfo(); // Show the inherited data

    return 0;
}
