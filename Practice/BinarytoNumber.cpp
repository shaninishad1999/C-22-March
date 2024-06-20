#include <iostream>
using namespace std;
int main()
{

    int binary, decimal = 0;
    cout << "Enter Number : ";
    cin >> binary;  //111  7
    int weight = 1;
    while (binary != 0)
    {
        int rem = binary % 10;  //111
        int decimal = decimal + rem * weight;  // 7
        // cout<<decimal;
        binary = binary / 10;
        weight = weight * 2; //24
    }
    cout << decimal;
}
