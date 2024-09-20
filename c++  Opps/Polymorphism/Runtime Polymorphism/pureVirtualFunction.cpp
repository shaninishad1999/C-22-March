#include <iostream>
using namespace std;
class A
{

public:
    virtual void display() = 0;
};
class B : public A
{
public:
    void display()
    {
        cout << "virtual derieded class" << endl;
    }
    void show()
    {
        cout << "Class B element" << endl;
    }
};

int main()
{
    B obj;
    obj.display();
    obj.show();
}
