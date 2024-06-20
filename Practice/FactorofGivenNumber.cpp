#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "Enter Number : ";
    cin >> n; // 15

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }
}