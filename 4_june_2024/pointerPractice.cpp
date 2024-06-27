#include <iostream>
using namespace std;
int main()
{
    int r, c;
    cout << "Enter No of Row : ";
    cin >> r; // 3
    // cout << "Addres of &r :" << &r << "\n";
    cout << "Enter No of Column : ";
    cin >> c; // 3
    // cout << "Addres of &c :" << &c << "\n";
    int **p = new int *[r];

    // cout << "Addres of *p :" << *p << "\n";
    // cout << "Addres of value **P :" << **p << "\n";

    cout << "Enter array elements\n";
    for (int i = 0; i < r; i++)
    {
        p[i] = new int[c];
    }
    for (int x = 0; x < r; x++)
    {
        for (int y = 0; y < c; y++)
        {
            cin >> p[x][y];
        }
    }
    cout << "store data are :\n";
    for (int x = 0; x < r; x++)
    {
        for (int y = 0; y < c; y++)
        {
            cout << p[x][y] << "\t";
        }
        cout << "\n";
    }

    // cout << "store address data are :\n";
    // for (int x = 0; x < r; x++)
    // {
    //     for (int y = 0; y < c; y++)
    //     {
    //         cout << &p[x][y] << "\t";
    //     }
    //     cout << "\n";
    // }
}