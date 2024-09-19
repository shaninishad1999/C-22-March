#include <iostream>
using namespace std;
class Student
{
public:
    string name;
    int rollNo;
    int age;
    double salary;

// parametrized cunsturctor
    Student(string name, int rollNo, int age, double salary)
    {
        this->name = name;
        this->rollNo = rollNo;
        this->age = age;
        this->salary = salary;
    }

    void display()
    {
        cout << "Name = " << name << endl;
        cout << "Roll No = " << rollNo << endl;
        cout << "Age = " << age << endl;
        cout << "Salary = " << salary << endl;
    }
};

int main()
{
    Student obj("Shanideval", 1, 22, 45000.25);

}
