#include <iostream>
using namespace std;
class Student
{
public:
    string name;
    int age;
    double sal;
};


int main()
{
    Student obj;
    obj.name = "Shanival";
    obj.age = 25;
    obj.sal = 15424.02;

    cout << "Name = " << obj.name << endl;
    cout << "Age = " << obj.age << endl;
    cout << "Salary = " << obj.sal << endl;
}