/* 9. Write a C++ program to implement a class called Student that has private member variables for name, class, roll number, and marks.
Include member functions to calculate the grade based on the marks and display the student's information. */
#include <iostream>
using namespace std;
class Student
{
private:
    string name;
    string studentClass;
    int rollno;
    double marks;
    char grade;

public:
    Student(string name, string studentClass, int rollno, double marks)
    {
        this->name = name;
        this->studentClass = studentClass;
        this->rollno = rollno;
        this->marks = marks;
        calculateGrade();
    }
    // Function to calculate grade based on marks
    void calculateGrade()
    {
        if (marks >= 90)
        {
            grade = 'A';
        }
        else if (marks >= 80)
        {
            grade = 'B';
        }
        else if (marks >= 70)
        {
            grade = 'C';
        }
        else if (marks >= 60)
        {
            grade = 'D';
        }
        else
        {
            grade = 'F';
        }
    }

    // Function to display student information
    void displayInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Class: " << studentClass << endl;
        cout << "Roll Number: " << rollno << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << grade << endl;
    }
};

int main()
{
    string name;
    string studnetClass;
    int rollno;
    double marks;
    cout << "Enter Name = ";
    cin >> name;
    cout << "Enter Section = ";
    cin >> studnetClass;
    cout << "Enter RollNo = ";
    cin >> rollno;
    cout << "Enter Marks = ";
    cin >> marks;

    Student obj(name, studnetClass, rollno, marks);
    obj.displayInfo();
}