/* 7. Write a C++ program to implement a class called Employee that has private member variables for name, employee ID, and salary.
 Include member functions to calculate and set salary based on employee performance. */

#include <iostream>
using namespace std;
class Employee
{
private:
    string name;
    int employeeId;
    double salary;

public:
    Employee(string name, int employeeId, double salary)
    {
        this->name = name;
        this->employeeId = employeeId;
        this->salary = salary;
    }
    void setName(string name)
    {
        this->name = name;
    }
    void setEmployeeId(int employeeId)
    {
        this->employeeId = employeeId;
    }
    void setSalary(double salary)
    {
        this->salary = salary;
    }
    string getName()
    {
        return name;
    }
    int getEmployeeId()
    {
        return employeeId;
    }
    double getSalary()
    {
        return salary;
    }
};
int main()
{
    string name;
    int employeeId;
    double salary;
    cout << "Input employee name:" << endl;
    cin >> name;
    cout << "Input employee ID:" << endl;
    cin >> employeeId;
    cout << "Input employee salary:" << endl;
    cin >> salary;

    Employee obj(name, employeeId, salary);
    obj.setName(name);
    obj.setEmployeeId(employeeId);
    obj.setSalary(salary);

    cout << "Name = " << obj.getName()<<endl;
    cout << "EmployeeId = " << obj.getEmployeeId()<<endl;
    cout << "Salary = " << obj.getSalary()<<endl;

}