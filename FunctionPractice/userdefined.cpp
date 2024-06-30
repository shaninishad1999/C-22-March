#include <iostream>
using namespace std;

// no return & without parameter
void cybrom()
{
    cout << "Welcome ";
}
int c;
void add(int a, int b)
{
     c = a + b;
}
void show()
{
    cout << "sum = " << c;
}
int main()
{
    cybrom();
    add(3, 5);
    show();
}
