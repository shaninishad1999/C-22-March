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

    // Deep copy constructor for Address
    Address(const Address &other) {
        this->city = other.city;
        this->country = other.country;
    }
};

class Person {
public:
    string name;
    int age;
    Address* address; // Pointer to another object (deep copy)

    // Constructor
    Person(string name, int age, Address* address) {
        this->name = name;
        this->age = age;
        this->address = new Address(*address); // Create new instance for deep copy
    }

    // Deep copy constructor
    Person(const Person &other) {
        this->name = other.name;
        this->age = other.age;
        this->address = new Address(*other.address); // Deep copy (new instance of Address)
    }

    // Destructor to clean up dynamically allocated memory
    ~Person() {
        delete address;
    }
};

int main() {
    // Create original person
    Address* address = new Address("New York", "USA");
    Person person1("John", 25, address);

    // Deep copy of person1
    Person person2(person1);

    // Modifying the address in the deep copied object
    person2.address->city = "Los Angeles";

    cout << "Person 1 address: " << person1.address->city << endl; // New York
    cout << "Person 2 address: " << person2.address->city << endl; // Los Angeles

    delete address; // Clean up dynamic memory
    return 0;
}
