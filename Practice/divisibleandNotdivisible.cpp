#include <iostream>
using namespace std;
int main()
{
    int m, n, i, j, s = 0, y = 0;
    cout << "Enter two number : \n";
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        if (i % m != 0)
        {

            // cout << i << "\t";

            s = s + i;
        }
    }
    cout << s << "\n";
    for (int i = 1; i <= n; i++)
    {
        if (i % m == 0)
        {

            // cout << i << "\t";
            y = y + i;
        }
    }
    cout << y << "\t";

    return s - y;
}