#include <iostream>
using namespace std;
int main()
{

    int p = 100;
    int *k = &p;
    cout << "Address of k= " << &k << "\n";
    cout << "Address of p= " << k << "\n";
    cout << "value of p= " << *k << "\n";
    // int ptr=120;
    int **ptr = &k;
    cout << "Address of k= " << ptr << "\n";
    cout << "Value of ptr= " << *ptr << "\n";
    cout << "Value of ptr= " << **ptr << "\n";
}
