#include <iostream>
using namespace std;
int main()
{

    int arr[]={20, 51, 4, 7, 8, 5};
    int s = sizeof(arr) / sizeof(arr[0]);
    int pos;
    for (int i = 0; i < s; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << "\nEnter position to delete value\n";
    cin >> pos;
    if (pos < 0 || pos > s)
    {
        cout << "Invalid position";
    }
    else
    {
        for (int i = pos; i < s - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        s--;

        cout << "New array\n";
        for (int i = 0; i < s; i++)
        {
            cout << arr[i] << "\t";
        }
    }
}