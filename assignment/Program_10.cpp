//10. Write a program to check whether a character is uppercase or lowercase alphabet.

#include <iostream>
using namespace std;
int main()
{

    // data type declaration
    char character;
    cout << "Enter  Any Character :" << endl; // message for display
    cin >> character;                         // user input

    if (character >= 'a' && character <= 'z') // Codition for check lowercase alphabet
    {
        cout << "It is Lowercase alphabet : " << character;
    }
   
    else if (character >= 'A' && character <= 'Z')   //// Codition for check uppercase  alphabet
    {
        cout << "It is Uppercase Alphabet : "<<character;
    }
    else{
        cout<<"Please Enter Valid Input";
    }

  
}