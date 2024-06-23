#include <iostream>
using namespace std;

void squareRoot(int x)
{
    int i;
    for (i = 1; i <= x / 2; i++)
    {
        if (i * i == x)
        {
            cout << "Squrare Root of number : " << i;
            break;
        }
    }
}
int main()
{
    int n;
    cout << "Enter any number : ";
    cin >> n;
    squareRoot(n);
}