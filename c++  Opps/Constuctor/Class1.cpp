#include <iostream>
using namespace std;

class A
{
    int a, b;  // Member variables

public:
    void setValues(int x, int y)  // Method to set the values of a and b
    {
        a = x;
        b = y;
    }

    void display()
    {
        cout << "Sum: " << a + b << endl;
    }
};

int main()
{
    int a, b;
    cout << "Enter Two Numbers: " << endl;
    cin >> a >> b;

    A obj;
    obj.setValues(a, b);  // Setting the values of a and b in the object
    obj.display();        // Displaying the sum

    return 0;
}
