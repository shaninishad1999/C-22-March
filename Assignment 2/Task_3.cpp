#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "Enter Array Size : ";
    cin >> n;
    int a[n];
    cout << "Array :\n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int sum = 0;
    
    cout << "Printed Array :\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i] == a[n])
            {
                sum= a[i] + a[n];
                cout << sum << "\t";
                break;
            }
        }
    }
}