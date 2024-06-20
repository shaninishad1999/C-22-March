#include <iostream>
using namespace std;

int main()
{
    int amount, rm, number;
    cout << "Enter Amount: ";
    cin >> amount;  // Example: 588

    if (amount >= 100)
    {
        number = amount / 100;   // number = 5
        cout << "Notes of 100: " << number << endl;
        amount = amount % 100; // amount = 588 - 500 = 88
    }

  else  if (amount >= 50)
    {
        number = amount / 50;    // number = 1
        cout << "Notes of 50: " << number << endl;
        amount = amount % 50; // amount = 88 - 50 = 38
    }

  else  if (amount >= 20)
    {
        number = amount / 20;  // number = 38 / 20 = 1
        cout << "Notes of 20: " << number << endl;
        amount = amount % 20; // amount = 38 - 20 = 18
    }

  else  if (amount >= 10)
    {
        number = amount / 10;  // number = 18 / 10 = 1
        cout << "Notes of 10: " << number << endl;
        amount = amount % 10; // amount = 18 - 10 = 8
    }

 else   if (amount >= 5)
    {
        number = amount / 5;  // number = 8 / 5 = 1
        cout << "Notes of 5: " << number << endl;
        amount = amount % 5; // amount = 8 - 5 = 3
    }

  else  if (amount >= 2)
    {
        number = amount / 2;  // number = 3 / 2 = 1
        cout << "Notes of 2: " << number << endl;
        amount = amount % 2; // amount = 3 - 2 = 1
    }

  else  if (amount >= 1)
    {
        number = amount / 1;  // number = 1 / 1 = 1
        cout << "Notes of 1: " << number << endl;
    }

    return 0;
}
