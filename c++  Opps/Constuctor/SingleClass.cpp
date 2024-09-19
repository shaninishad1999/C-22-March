#include <iostream>
using namespace std;

class Addition
{
private:
    int a, b, c, k; // data members, added 'k' to store the sum

    // Constructor to initialize values
  public:
    Addition(int a, int b, int c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }

    void sum()
    {
        k = a + b + c;
    }

    void display()
    {
        cout << "Sum = " << k << endl;
    }
};

int main()
{
    Addition obj(10, 20, 30);

   
    obj.sum();

    obj.display();

    return 0;
}
