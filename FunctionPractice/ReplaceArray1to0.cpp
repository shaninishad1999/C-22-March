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
    int sum = 0;
    cout << "Normal array\n";
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (arr[i][j] == 1)
            {
                arr[i][j] = 0;
            }
            cout << arr[i][j] << "\t";
        }
        cout << "\n";
    }
}