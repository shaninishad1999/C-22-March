#include <iostream>
using namespace std;
void swap(int x, int y)
{
    cout << "before swap Number >"<<endl;
    cout << "before swap Number a: " << x << endl;
    cout << "before swap Number b: " << y<<endl;

    x = x + y;
    y = x - y;
    x = x - y;
    cout << "after swap Number "<<endl;
    cout << "after swap Number a: " << x << endl;
    cout << "after swap Number b: " << y;
}
int main()
{
    int a, b;
    cout << "Enter Two number ";
    cin >> a >> b;
    swap(a, b);
}