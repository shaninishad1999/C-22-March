#include <iostream>
using namespace std;

template <typename T>  // Fixed template syntax
class cybrom {
public:
    T show(T a) {  // Corrected function declaration
        return ++a;  // Pre-increment to return the updated value
    }
};

int main() {
    cybrom<int> obj;  // Creating an object of class template with int type
    cout << obj.show(7);  // Calls show(7), should return 8
    return 0;
}
