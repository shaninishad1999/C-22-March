//10. Write a program to check whether a character is uppercase or lowercase alphabet.

#include <iostream>
using namespace std;
int main()
{

  //  data type declaration
    char character;

    cout << "Enter  Any Character :" << endl; // message for display
    cin >> character;                         //taking input from user

    if (character >= 'a' && character <= 'z') // Condition for check lowercase alphabet
    {
        cout << "It is Lowercase alphabet : " << character;
    }
   
    else if (character >= 'A' && character <= 'Z')   //// Condition for check uppercase  alphabet
    {
        cout << "It is Uppercase Alphabet : "<<character;
    }
    // while (character<='Z')
    // {
    //     cout<<character<<"\t";
    //     character++;
        
    // }
    // for (char i = 'a'; i <='z'; i++)
    // {
    //     cout<<i;
    // }
    
    
 

  
}