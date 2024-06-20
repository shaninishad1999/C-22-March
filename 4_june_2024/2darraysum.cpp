#include <iostream>
using namespace std;
int main()
{

    // int a[3][2]={1,2,3,4,5,6};
    int a[2][2];
    int b[2][2];
    int l, k;
    cout << "Enter array 1 value\n";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> a[i][j];
        }
        //    cout<<"\n";
    }
    cout << "Enter array 2 value\n";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> b[i][j];
        }
        //    cout<<"\n";
    }
    cout << "1 array\n";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {

            cout << a[i][j] << "\t";
        }
        cout << "\n";
    }
    cout << "2 array \n";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {

            cout << a[i][j] << "\t";
        }
        cout << "\n";
    }
    cout << "output\n";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << a[i][j] + b[i][j] << "\t";
        }
        cout << "\n";
    }

    //  wap to print the sum of the values of 2d;
    // wap to replace 1 by 0 in 2d array
}