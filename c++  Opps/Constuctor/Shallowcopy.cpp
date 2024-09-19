#include<iostream>
using namespace std;

class Address {
public:
    string city;
    string country;

    // Constructor
    Address(string city, string country) {
        this->city = city;
        this->country = country;
    }
};

class Person {
public:
    string name;
    int age;
    Address* address; // Pointer to another object (shallow copy demonstration)

    // Constructor
    Person(string name, int age, Address* address) {
        this->name = name;
        this->age = age;
        this->address = address;
    }

    // Shallow copy constructor
    Person(const Person &other) {
        this->name = other.name;
        this->age = other.age;
        this->address = other.address; // Shallow copy (same reference)
    }
};

int main() {
    // Create original person
    Address* address = new Address("New York", "USA");
    Person person1("John", 25, address);

    // Shallow copy of person1
    Person person2(person1);

    // Modifying the address in the shallow copied object
    person2.address->city = "Los Angeles";

    cout << "Person 1 address: " << person1.address->city << endl; // Los Angeles
    cout << "Person 2 address: " << person2.address->city << endl; // Los Angeles

    delete address; // Clean up dynamic memory
    return 0;
}
