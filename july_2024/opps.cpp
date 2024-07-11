#include<iostream>
using namespace std;

// Define a struct named 'pop'
struct pop {
    int a = 100; // Initialize 'a' to 100
};

// Define a class named 'top'
class top {
public:
    int a = 10; // Initialize 'a' to 10
};

int main() {
    // Creating an object 't' of struct 'pop'
    pop t;
    cout << t.a << "\n"; // Output: 100

    // Creating an object 'p' of class 'top'
    top p;
    cout << p.a; // Output: 10

    return 0; // Return statement at the end of main function
}
