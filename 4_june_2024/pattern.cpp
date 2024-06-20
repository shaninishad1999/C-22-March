#include <iostream>
using namespace std;
int main()
{

    // for (int i = 1; i <=4; i++)
    // {
    //     for (int j = 4; j >=i; j--)
    //     {
    //     cout<<i<<"\t";
    //     }
    //     cout<<"\n";

    // }

    // for (int i = 1; i <=4; i++)
    // {
    //     for (int j = 1; j <=i; j++)
    //     {
    //     cout<<i<<"\t";
    //     }
    //     cout<<"\n";

    // }

    int count = 0, k, i, j;
    for (i = 1; i <= 4; i++)
    {
        for (j = 4; j > i; j--)
        {
            cout << " ";
        }
        for (k = 1; k <= i; k++)
        {
            cout << k;
        }
        cout << "\n";
    }
}
