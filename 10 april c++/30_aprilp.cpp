#include <iostream>
using namespace std;

int main()
{

    int number, p;
    cout << "Enter Number ";
    cin >> number;
    p = number % 2;
    if (number % 2 == 0) // if we use (number/2==0) it will git questiont but we need to reminder zero
    {
        cout << "Number is even";
    }
    else
    {
        cout << "Number is odd";
    }
    cout << "\nReminder of p : " << p;
    // int num1,num2;

    // cout<<"Enter Number 1,2 : ";
    // cin>>num1>>num2;
    // if (num1>num2)
    // {
    //     cout<<"num1 is greater";
    // }
    // else
    // {
    //     cout<<"num2 is greater";
    // }
}