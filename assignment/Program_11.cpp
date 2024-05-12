// 11. Write a  program to input week number and print week day.

#include <iostream>
using namespace std;
int main()
{

    // data type declaration
    int Week_Number, days;
    cout << "Enter  Week Number :" << endl; // message for display
    cin >> Week_Number;                       // user input

    days = Week_Number * 7;
    cout << "Number of days  : " << days;
}