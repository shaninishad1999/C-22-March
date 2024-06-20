// 11. Write a  program to input week number and print week day.

#include <iostream>
using namespace std;
int main()
{
    int choice;
    cout << "Enter Week Number : "; // // message for display
    cin >> choice;                  // taking input from user

    // case of chosing the Week number
    switch (choice)
    {
    case 1:
        cout << "Sunday";
        break;
    case 2:
        cout << "Monday";
        break;
    case 3:
        cout << "Tuesday";
        break;
    case 4:
        cout << "Wednesday";
        break;
    case 5:
        cout << "Thursday";
        break;
    case 6:
        cout << "Friday";
        break;
    case 7:
        cout << "Saturday";
        break;

    
    }
}
