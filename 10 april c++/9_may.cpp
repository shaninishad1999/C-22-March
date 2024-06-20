#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter 2  Number \n";
    cin >> a >> b;
    cout << "Select 1 for + ,2 for multi and 3 for % ";
    cin >> c;
    switch (c)
    {
    case 1*2:
        cout << "a+b : " << a + b;
        break;
    // case 2:
    //     cout << "a-b : " << a - b;
    //     break;

    case 3:
        cout << "a-b :" << a % b;
        break;

    default:
        cout << "other";
        break;
    }
}