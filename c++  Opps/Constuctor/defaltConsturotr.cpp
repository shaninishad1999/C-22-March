#include <iostream>
using namespace std;
class Student
{

public:
    string name;
    int rollNo;
    int age;
    double sal;

    // Constructor with default values
    Student()
    {
        name = "null";
        rollNo = 0;
        age = 0;
        sal = 0.0;
    }

    void display()
    {
        cout << "Name = " << name << endl;
        cout << "Roll No = " << rollNo << endl;
        cout << "Age = " << age << endl;
        cout << "Salary = " << sal << endl;
    }
};

int main()
{

    string name;
    int rollNo;
    int age;
    double sal;
    cout << "Enter name" << endl;
    cin >> name;
    cout << "Enter rollNO" << endl;
    cin >> rollNo;
    cout << "Enter age" << endl;
    cin >> age;
    cout << "Enter salary" << endl;
    cin >> sal;

    Student obj;
    obj.name = name;
    obj.rollNo = rollNo;
    obj.age = age;
    obj.sal = sal;
    obj.display();
}