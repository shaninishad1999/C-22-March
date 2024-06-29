#include <iostream>
using namespace std;

int main() {
    int rows = 5; // Half of the diamond (excluding the middle line)

    // Upper half of the diamond
    for (int i = 1; i <= rows; i++) {
        // Print spaces before stars
        for (int j = 1; j <= rows - i; j++) {
            cout << " ";
        }

        // Print stars
        for (int k = 1; k <= i; k++) {
            if (k == i) {
                cout << "*";
            } else {
                cout << "* ";
            }
        }

        // Move to the next line after each row
        cout << "\n";
    }

    // Lower half of the diamond (excluding the middle line)
    for (int i = rows - 1; i >= 1; i--) {
        // Print spaces before stars
        for (int j = 1; j <= rows - i; j++) {
            cout << " ";
        }

        // Print stars
        for (int k = 1; k <= i; k++) {
            if (k == i) {
                cout << "*";
            } else {
                cout << "* ";
            }
        }

        // Move to the next line after each row
        cout << "\n";
    }

    return 0;
}
