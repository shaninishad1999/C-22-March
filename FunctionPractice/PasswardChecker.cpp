#include <iostream>
using namespace std;

int atmpsd(int num, int at = 1)
{

    if (at > 3)
    {
        cout << "card block";
        return -1;
    }
    else if (num == 2025)
    {
        cout << "welcome user";
        return 0;
    }
    else
    {
        cout << "try again\n";
        cin >> num;
        atmpsd(num, at + 1);
    }
}

int main()
{

    int n;
    cout << "Enter Password\n";
    cin >> n;
    atmpsd(n);
}