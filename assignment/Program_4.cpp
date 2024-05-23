// 4. Write a program to check whether a number is divisible by 5 and 11 or not.

#include <iostream>
using namespace std;
int main()
{

    // data type and variable declaration
    int number;
    cout << "Enter  Number :" << endl; // Message display
    cin >> number;                    //taking input from user

    // condition for number is divisible by 5 and 11 or not.
    if (number % 5 == 0 && number % 11 == 0)
    {
        cout << "Number is divisible by 5 & 11 : " << number;
    }
    else
    {
        cout << "Number is not divisible by 5 & 11 : " << number;
    }
}