#include <iostream>
using namespace std;

class b;  // Forward declaration of class b

class a {
private:
    int x;

public:
    // Constructor to initialize 'x'
    a(int x) {
        this->x = x;
    }

    // Friend function declaration for swapping
    friend void swap(a&, b&);
};

class b {
private:
    int y;

public:
    // Constructor to initialize 'y'
    b(int y) {
        this->y = y;
    }

    // Friend function declaration for swapping
    friend void swap(a&, b&);
};

// Swap function that uses references to modify the original objects
void swap(a& e, b& f) {
    int temp;
    temp = e.x;
    e.x = f.y;
    f.y = temp;
    cout << "After swapping, value of class a = " << e.x << endl;
    cout << "After swapping, value of class b = " << f.y << endl;
}

int main() {

int m,n;
cout<<"Enter Two number for swap"<<endl;
cin>>m>>n;

    a e(m);  // Object of class a initialized with 5
    b f(n);  // Object of class b initialized with 3

    // Swap values
    swap(e, f);

    return 0;
}
