#include <iostream>
using namespace std;

class top {
public:
    // Functions
    void sum() {
        cout << "hello\n";
    }

    void show() {
        cout << "Show function\n";
    }

    void display() {
        cout << "display function\n";
    }

    // Function overloading
    void sum(int a, int b) {
        cout << "function 1 overload \n";
        cout << "sum = " << a + b << endl;
    }

    void sum(float a, float b) {
        cout << "function 2 overload \n";
        cout << "sum = " << a + b << endl;
    }

    void sum(double a, double b) {
        cout << "function 3 overload \n";
        cout << "sum = " << a + b << endl;
    }
};

int main() {
    top k;
    k.sum();       // Calls sum() with no arguments
    k.sum(10, 20);  // Calls sum(int, int)
    k.sum(10.5f, 20.5f);  // Calls sum(float, float)
    k.sum(10.123, 20.456);  // Calls sum(double, double)

    k.show();      // Calls show()
    k.display();   // Calls display()

    return 0;
}
