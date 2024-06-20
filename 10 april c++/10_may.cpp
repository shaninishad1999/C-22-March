#include <iostream>
using namespace std;
int main()
{
    // int a, b, c;
    // cout << "Enter Two Number : ";
    // cin >> a >> b;

    // cout << "For largest 1, for Swap 2";
    // cin >> c;
    // switch (c)
    // {
    // case 1:
    //     if (a > b)
    //     {
    //         cout << "a is greater";
    //     }
    //     else
    //     {
    //         cout << "b is greater";
    //     }

    //     break;
    // case 2:
    //     cout << "\nBefore swpa a : " << a << " b : " << b;

    //     int temp;
    //     temp = a;
    //     a = b;
    //     b = temp;

    //     cout << "\nAfter swpa a : " << a << " b : " << b;
    //     break;

    // default:
    //     cout << "other";
    //     break;
    // }

    char c;
    cout << "Enter any char : ";
    cin >> c;

     if (c >= 'a' && c <= 'y')
    {
        cout <<char( c-32);
    }
    else if (c >= 'A' && c <= 'Y')
    {
        cout<<char(c+32);
    }
    else if (c == 'z')
    {
        cout<<" ";
       
    }
    
}

