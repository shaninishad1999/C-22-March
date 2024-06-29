#include <iostream>
using namespace std;

int main() {
    int rows = 5; // Number of rows for Pascal's triangle

    // Iterate through each row
    for (int n = 0; n < rows; n++) {
        int coeff = 1; // Initialize first coefficient of each row

        // Print spaces for formatting
        for (int i = 0; i < rows - n - 1; i++) {
            cout << " ";
        }
        
        // Print coefficients of current row
        for (int k = 0; k <= n; k++) {
            cout << coeff << " ";
             coeff = coeff * (n - k) / (k + 1); // Calculate next coefficient
        }

        // Move to the next line after each row
        cout << "\n";
    }

    return 0;
}
