#include <iostream>
using namespace std;
int main()
{
    //     int a, b = 1;
    //     cout << "Enter any no\n";
    //     cin >> a;

    // table:
    //     cout << a * b << "\n";
    //     b++;

    //     if (b <= 10)
    //     {

    //         goto table;
    //     }
    //     cout << "\ndone";

    // int year;

    // cout<<"Enter Year : ";
    // cin>>year;

    // if ((year %4==0 && year%100!=0) || year%400==0)
    // {
    //   cout<<"leap year";
    // }
    // else{
    //     cout<<"Not leap year";
    // }

    char ch;
    cout << "enter any character : ";
    cin >> ch;

    if (ch >= 'a' && ch <= 'z')
    {
        cout << "smallcase";
    }
    else
    {
        cout << "capital";
    }
}
