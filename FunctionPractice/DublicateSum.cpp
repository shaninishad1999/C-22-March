#include <iostream>
using namespace std;
int main()
{

    int i, j, n;
    cout << "Enter array size";
    cin >> n;
    int arr[n];
    cout << "Enter array size\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "store array \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << "\nsum of dublicate array\n ";
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                sum = arr[i] + arr[j];
            }
        }
    }
    cout << "\nSum = " << sum;
}