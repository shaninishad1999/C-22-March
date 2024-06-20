#include <iostream>
using namespace std;
int main()
{

    int n;
    // cout<<INT64_MAX;
    cout << "Enter Number : ";
    cin >> n; // 1452

    // while (n!=0)
    // {
    //     sum++;
    //     n=n/10;

    // }
    // cout<<sum<<endl;

    // a=4875 addition

    // first and last number addition
    // int first;
    // int digit = n % 10; // last digit
    // while (n != 0)
    // {

    //     first = n;
    //     n = n / 10;
    // }
    // cout << digit + first << endl;

    // 3rd question factor of any number

    int i;
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i<<"\t";
        }
        
    }
}
