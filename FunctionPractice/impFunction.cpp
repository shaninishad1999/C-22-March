#include <iostream>
using namespace std;
// 80rs
// 20 profit
int product(int qty) // taking something and return something
{

    return qty * 80;
}
int customer(int l)
{
    int k = 100 * l;
    return k;
}
int main()
{
    int n;
    cout << "Enter how much petrol :";
    cin >> n;
    cout << product(n) + (20 * n) << endl;
}