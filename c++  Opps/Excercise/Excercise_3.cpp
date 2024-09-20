/* 3. Write a C++ program to create a class called Person that has private member variables for name, age and country.
 Implement member functions to set and get the values of these variables.  */

#include <iostream>
using namespace std;
class Person
{
private:
    string name;
    int age;
    string country;

public:
    Person(string name, int age, string country)
    {
        this->name = name;
        this->age = age;
        this->country = country;
    }
    void setName(string name)
    {
        this->name = name;
    }
    string getName()
    {
        return name;
    }
    void setAge(int age)
    {
        this->age = age;
    }
    int getAge()
    {
        return age;
    }
    void setCountry(string country)
    {
        this->country = country;
    }
    string getCountry()
    {
        return country;
    }
};
int main()
{

    string name;
    int age;
    string country;
    cout << "Enter Name" << endl;
    cin >> name;
    cout << "Enter age" << endl;
    cin >> age;
    cout << "Enter country" << endl;
    cin >> country;
    Person obj(name, age, country);
    obj.setName(name);
    obj.setAge(age);
    obj.setCountry(country);

    cout << "Name = " << obj.getName() << endl;
    cout << "Age = " << obj.getAge() << endl;
    cout << "Country = " << obj.getCountry() << endl;
}