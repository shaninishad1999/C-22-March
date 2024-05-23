// 3. Write a  program to check whether a number is negative, positive or zero.

#include <iostream>
using namespace std;
int main()
{

    // data type and variable declaration
    int number;
    cout << "Enter  Number :" << endl; // Message display
    cin >> number;                    //taking input from user

    // condition for number is negative, positive or zero.
    if (number > 0)
    {
        cout << "Number is Positive : " << number;
    }
    else if (number < 0)
    {
        cout << "Number is Negative : " << number;
    }
    else
    {
        cout << "Number is Zero : " << number;
    }
}