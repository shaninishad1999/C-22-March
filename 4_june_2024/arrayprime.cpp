
#include <iostream>
using namespace std;
int main()
{

    int a;
    cout << "enter any number \n";
    cin >> a;
    int f = 0;
    int k=a-1;
    for (int i ; i > a; i--)
    {
        if (a % i == 0)
        {
            f++;
            break;
        }
    }
    if (f == 1)
    {
        cout << "Not Prime";
    }
    else
    {
        cout << "Prime";
    }

    return 0;
}