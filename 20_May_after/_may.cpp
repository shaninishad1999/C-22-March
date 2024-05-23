#include <iostream>
using namespace std;
int main()
{

    // int a = 1, n;
    // cout << "enter number : ";
    // cin >> n;
    //  do
    // {
    //     if (n > 0)
    //     {
    //         cout << "====1>  " << a << " * " << n << " = " << a * n << endl;
    //     }
    //     else
    //     {
    //         cout << "Enter valid input";
    //         break;
    //     }
    //     a++;

    // } while (a <= 10);

    // if (a > 0)
    // {
    //     do
    //     {
    //         cout << "====2>  " << a << " * " << n << " = " << a * n << endl;
    //         a++;
    //     } while (a <= 10);
    // }
    // else
    // {
    //     cout << "Enter valid input";
    // }

    // if (n > 0)
    // {
    //     while (a <= 10)
    //     {
    //         cout << "====2>  " << a << " * " << n << " = " << a * n << endl;
    //         a++;
    //     }
    // }
    // else
    // {
    //     cout << "Enter valid input";
    // }

  int n, i = 1;
    cout << "Enter password: ";
    cin >> n;

    do {
        if (n == 1024) {
            cout << "Welcome!";
            break;
        }

        if (i > 5) {
            cout << "ATM blocked.";
            break; // Exiting the loop if attempts exceed 5
        }
        
        cout << "Incorrect password. Try again. Attempts left: " << 5 - i << endl;
        cin >> n;
        i++;

    } while (i <= 5); // Changed the condition to include 5 attempts

    return 0;
}