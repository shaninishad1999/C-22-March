#include <iostream>
using namespace std;

int main()
{
    int rows = 5; // Number of rows for Pascal's triangle

    // Iterate through each row
    for (int i = 0; i < 5; i++)
    {
        int coeff = 1; // Initialize first coefficient of each row
        for (int j = 0; j < 5 - i; j++)
        {
            cout << " ";
        }
        // Print coefficients of current row
        for (int k = 0; k <= i; k++)
        {
            cout << coeff << " ";
            coeff = coeff * (i - k) / (k + 1); // Calculate next coefficient
        }

        // Move to the next line after each row
        cout << "\n";
    }

    return 0;
}
