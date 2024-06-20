#include <iostream>
using namespace std;
int main()
{
    int n, multi = 1;
    cout << "Enter Number : ";
    cin >> n;

    while (n != 0)
    {
        int digit = n % 10;
        multi = multi * digit;
        n = n / 10;
    }
    cout << "Multiplication : " << multi;
}