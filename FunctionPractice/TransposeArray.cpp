#include <iostream>
using namespace std;
int main()
{

    int n, i, j;
    cout << "Enter array size ";
    cin >> n;
    cout << "Enter array\n";
    int arr[n][n];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "Normal array\n";
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << "\n";
    }
    cout << "Transpose array\n";
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << arr[j][i] << "\t";
        }
        cout << "\n";
    }
}