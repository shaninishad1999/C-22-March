// 8. Write a  program to input any alphabet and check whether it is vowel or consonant.

#include <iostream>
using namespace std;
int main()
{

    // data type and variable declaration
    char character;
    cout << "Enter  Any Character :" << endl; // message for display
    cin >> character;                         //taking input from user

    // codition for input any alphabet and check whether it is vowel or consonant.
    if (character == 'a' || character == 'A' || character == 'e' || character == 'E' || character == 'i' || character == 'I' || character == 'o' || character == 'O' || character == 'u' || character == 'U') // Codition for check alphabet or not
    {
        cout << "It is Vowel : " << character;
    }
    else
    {
        cout << "It is  Consonant : " << character;
    }
}