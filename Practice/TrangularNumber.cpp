#include <iostream>
using namespace std;
int main()
{

    // int n;
    // cout << "Enter Number : ";
    // cin >> n;

    int i, digit = 0;
    for (i = 2; i <= 5; i++)
    {
        int digit = (i * (i + 1)) / 2;
        cout<<digit<<endl;
        // cout << digit << endl;
    }
}