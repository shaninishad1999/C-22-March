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
    int sum=0;
    cout << "Normal array\n";
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            sum=sum+arr[i][j];
            cout << arr[i][j] << "\t";
        }
        cout << "\n";
    }
    cout<<"sum = "<<sum;
    
} 