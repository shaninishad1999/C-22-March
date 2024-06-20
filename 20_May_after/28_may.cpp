#include <iostream>
using namespace std;
int main()
{
    // int n1, n2;
    // cout << "Enter Two Number : ";
    // cin >> n1 >> n2;
    // int mx = n1 < n2 ? n1 : n2;

    // while (true)
    // {
    //     if (n1 % mx == 0 && n2 % mx == 0)
    //     {
    //         cout << mx;
    //         break;
    //     }
    //     mx--;

    // }

    // for (int i = 1; i <=5; i++)
    // {
    //     for (int j = 1; j <=i; j++)
    //     {
    //         cout<<"* "<<"\t";
    //     }
    //     cout<<"\n";

    // }

    // for (int i = 1; i <=5; i++)
    // {
    //     for (int j = 1; j <=i; j++)
    //     {
    //         cout<<i<<"\t";
    //     }
    //     cout<<"\n";

    // }

    // for (int i =97; i <=102; i++)
    // {
    //     for (int j = 97; j <=i; j++)
    //     {
    //         cout<<char(i)<<"\t";
    //     }
    //     cout<<"\n";

    // }
    // for (char i ='a'; i <='d'; i++)
    // {
    //     for (char j = 'a'; j <=i; j++)
    //     {
    //         cout<<i<<"\t";
    //     }
    //     cout<<"\n";

    // }
    int r = 1;
    for (int i = 1; i <= 6; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << r << "\t";
            r++;
        }
        cout << "\n";
    }
}