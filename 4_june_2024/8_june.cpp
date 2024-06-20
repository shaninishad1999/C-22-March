#include <iostream>
using namespace std;
int main()
{

    // int a[5]; //single dimensinal array
    // cout<<"Enter 5 values : ";
    // for (int i = 0; i < 5; i++)
    // {
    //     cin>>a[i];
    // }
    // cout<<"Printed value \n";
    // for (int i = 0; i < 5; i++)
    // {
    //     cout<<a[i]<<"\t";
    // }

    // print even number in arrray
    int a[5] = {4, 2, 3, 1, 6}; // single dimensinal array
    int b = a[0];
    cout << "Printed value \n";
    for (int i = 0; i < 5; i++)
    {
        // if (a[i]%2==0)
        // {
        // cout<<a[i]<<"\t";
        // }

        if (b < a[i])
        {
            b = a[i];
        }
    }
    cout << b;
}