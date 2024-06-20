#include <iostream>
using namespace std;
int main()
{

    // rectangular pattern
    // int i,j;
    // for ( i = 1; i <=5; i++)
    // {
    //     //  cout<<"*\t";
    //     for ( j = 1; j <=5; j++)
    //     {
    //         cout<<"*\t";
    //     }
    //     cout<<"\n";

    // }

    // triangular printing

    // for (int i = 1; i <=5; i++)
    // {
    //     for (int j = 1; j<=i; j++)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<"\n";
    // }

    int i, j;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <=5-i; j++)
        {
            cout << " ";
        }
        for ( j = 1; j <=i; j++)
        {
            cout<<" *";
        }
        cout<<"\n";
        
    
    }

    //    opposite triangula print
    // for (int i = 1; i <=5; i++)
    // {
    //     for (int j = 5; j>=i; j--)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<"\n";
    // }
    //    opposite triangula print methode 2
    // for (int i = 5; i >= 1; i--)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << "\n";
    // }

    // int i, j, n, m;
    // cout << "Enter two numbers (n and m): ";
    // cin >> n >> m;

    // for (i = 1; i <= n; i++) {
    //     for (j = 1; j <= m; j++) {
    //         if (i == j || i == m || i == n) {
    //             cout << "*" << "\t";
    //         } else {
    //             cout << " " << "\t";
    //         }
    //     }
    //     cout << "\n";
    // }

    // return 0;
}
