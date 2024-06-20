#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Number : ";
    cin >> n;

    if (n <= 1)
    {
        cout << "Neither prime not composite number";
    }
    else if (n % 2 == 0)
    {
        cout << "Not a prime number";
    }
    else if (n == 2)
    {
        cout << "Prime number";
    }
    else
    {
        
        for (int i = 3; i * i <= n; i = i + 2)
        {
            if (n % i == 0)
            {
                cout << "not Prime Number";
                break;
            }
        }
    }
}