#include <iostream>
#include <cstring> // For strcpy function
using namespace std;

class TCS {
private:
    char name[50];
    float salary;

public:
    // Parameterized constructor accepting const char* for name
    TCS(const char* n, float s) {
        strcpy(name, n); // Copy name to char array
        salary = s;
    }

    // Display method to show name and salary
    void display() {
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    // Create an employee object and pass name and salary
    TCS employee("Shanideval", 50000.0);

    // Display employee details
    employee.display();

    return 0;
}
