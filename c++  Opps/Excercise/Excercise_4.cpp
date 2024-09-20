/* 4. Write a C++ program to create a class called Car that has private member variables for company, model, and year.
 Implement member functions to get and set these variables.  */

#include <iostream>
using namespace std;
class Car
{
private:
    string company;
    string model;
    int year;

public:
    Car(string company, string model, int year)
    {
        this->company = company;
        this->model = model;
        this->year = year;
    }

    void setCompany(string company)
    {
        this->company = company;
    }
    void setModel(string model)
    {
        this->model = model;
    }
    void setYear(int year)
    {
        this->year = year;
    }
    string getCompany()
    {
        return company;
    }
    string getModel()
    {
        return model;
    }
    int getYear()
    {
        return year;
    }
};

int main()
{
    string company, model;
    int year;
    cout << "Enter Company Name" << endl;
    cin >> company;
    cout << "Enter Model Name " << endl;
    cin >> model;
    cout << "Enter Year" << endl;
    cin >> year;

    Car obj(company, model, year);
    obj.setCompany(company);
    obj.setModel(model);
    obj.setYear(year);

    cout << "Company Name = " << obj.getCompany() << endl;
    cout << "Company Model = " << obj.getModel() << endl;
    cout << "company Year = " << obj.getYear() << endl;
}