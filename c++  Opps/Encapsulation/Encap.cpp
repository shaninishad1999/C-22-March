#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string name;
    int age;
    double sal;

public:
    Student()
    {
        name = "null";
        age = 0;
        sal = 0.0;
    }

    void setName(string name)
    {
        this->name = name;
    }

    void setAge(int age) // Corrected: Added parameter
    {
        this->age = age;
    }

    void setSal(double sal) // Corrected: Added parameter
    {
        this->sal = sal;
    }

    string getName() // Corrected: Return type string
    {
        return name;
    }

    int getAge() // Corrected: Return type int
    {
        return age;
    }

    double getSal() // Corrected: Return type double
    {
        return sal;
    }
};

int main()
{
    Student obj;
    obj.setName("Shanideval");
    obj.setAge(25); // Example age
    obj.setSal(50000.0); // Example salary

    // Example usage to retrieve and print values
    cout << "Name: " << obj.getName() << endl;
    cout << "Age: " << obj.getAge() << endl;
    cout << "Salary: " << obj.getSal() << endl;

    return 0;
}
