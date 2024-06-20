#include <iostream>
using namespace std;
int main()
{
    int i, j, k;
    int n = 5;
    // for ( i = 1; i <=n; i++)
    // {
    //     for ( j = n; j >i; j--)
    //     {

    //         cout<<" ";
    //     }
    //     for ( k = 1; k<=i; k++)
    //     {
    //         cout<<"* ";
    //     }

    //     cout<<"\n";
    // }

    // output
    //     *
    //    * *
    //   * * *
    //  * * * *
    // * * * * *


    for ( i = 1; i <=n; i++)
    {
        for ( j = 1; j <=i; j++)
        {

            cout<<" ";
        }
        for ( k =n; k>=i; k--)
        {
            cout<<"* ";
        }

        cout<<"\n";
    }



}