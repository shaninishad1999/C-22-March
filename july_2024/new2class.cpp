// friend function is use to acces the private data memeber or memeber function of any class. for that we have to declare friends function
// in both classes. for friend functio using friends keywrod
#include <iostream>
using namespace std;

class Tenth;  // Forward declaration of class Tenth

class Twelve {
    int a;

public:
    void twelveResult(int p) {
        a = p;
    }

    friend void show(Twelve, Tenth);  // Friend function declaration
};

class Tenth {
    int b;

public:
    void tenResult(int p) {
        b = p;
    }

    friend void show(Twelve, Tenth);  // Friend function declaration
};

void show(Twelve t12, Tenth t10) {
    if (t12.a > t10.b) {
        cout << "Result: " << t12.a;
    } else {
        cout << "Result: " << t10.b;
    }
}

int main() {
    Twelve t12;
    Tenth t10;

    t12.twelveResult(97);
    t10.tenResult(70);

    show(t12, t10);

    return 0;
}
