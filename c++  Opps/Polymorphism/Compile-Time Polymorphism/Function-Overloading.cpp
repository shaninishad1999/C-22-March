#include <iostream>
using namespace std;
class A
{

public:
    void show()
    {
        int a = 5;
        int b = 10;
        cout << "Sum = " << a + b << endl;
    }
    void show(int x, int y)
    {
        cout << "Multi = " << x * y << endl;
    }
};

int main()
{
    A obj;
    obj.show();
    obj.show(4, 8);
}