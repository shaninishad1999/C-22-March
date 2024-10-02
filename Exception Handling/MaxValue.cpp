#include<iostream>
using namespace std;

class B; // Forward declaration of class B

class A {
public:
    int a;
    
    A() {
        a = 4;
    }
    
    // Declare friend function
    friend int compare(A, B);
};

class B {
public:
    int b;
    
    B() {
        b = 54;
    }
    
    // Declare friend function
    friend int compare(A, B);
};

// Friend function definition to compare 'a' and 'b' with return type
int compare(A objA, B objB) {
    if (objA.a > objB.b) {
        return 1; // Return 1 if 'a' is greater than 'b'
    } else if (objA.a < objB.b) {
        return -1; // Return -1 if 'b' is greater than 'a'
    } else {
        return 0; // Return 0 if 'a' and 'b' are equal
    }
}

int main() {
    A objA;
    B objB;
    
    int result = compare(objA, objB);
    
    // Use the returned value to print the comparison result
    if (result == 1) {
        cout << "a is greater than b." << endl;
    } else if (result == -1) {
        cout << "b is greater than a." << endl;
    } else {
        cout << "a and b are equal." << endl;
    }

    return 0;
}
