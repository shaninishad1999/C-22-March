// 7. Write a program to check whether a character is alphabet or not.

#include <iostream>
using namespace std;
int main()
{

    // data type and variable declaration
    char character;
    cout << "Enter  Any Character :" << endl; // message for display
    cin >> character;                         //taking input from user

    // codition for character is alphabet or not.
    if (character >= 'a' && character <= 'z' || character >= 'A' && character <= 'Z') // Codition for check alphabet or not
    {
        cout << "It is Alphabet : " << character;
    }
    else
    {
        cout << "It is Not Albhabet : " << character;
    }
}