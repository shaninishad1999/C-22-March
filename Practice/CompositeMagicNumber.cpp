#include <iostream>
using namespace std;
int main()
{

    int m, n, i;
    cout << "Enter Two Number Range : \n";
    cin >> m >> n;

    for (i = m; i <= n; i++)
    {
        if (n % i == 0 )
        {
            cout << i<<"\t";
        }
    }
}