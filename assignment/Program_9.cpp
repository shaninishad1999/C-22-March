// 9. Write a  program to input any character and check whether it is alphabet, digit or special character.

#include <iostream>
using namespace std;
int main()
{

   // data type and variable declaration
    char character;
    cout << "Enter  Any Character :" << endl; // message for display
    cin >> character;                         //taking input from user

    // codition for input any character and check whether it is alphabet, digit or special character.

    if (character >= 'a' && character <= 'z' || character >= 'A' && character <= 'Z') // Codition for check alphabet or not
    {
        cout << "It is Alphabet : " << character;
    }

    else if (character == '$' || character == '*' || character == '{' || character == '}' || character == '(' || character == ')' || character == '#' || character == '~' || character == ';' || character == ':' || character == '.' || character == '[' || character == ']')
    {
        cout << "It is Special Character";
    }
    else if (character >= '0' || character <= '9')
    {
        cout << "It is Number : " << character;
    }
}