#include <iostream>
using namespace std;
int main()
{

    // dynamic array me memory delete nhi hoti hai
    // ese delete krna padta hai using delete kyeword
    // dynamic arrry new keyword se banata hai
    int a;
    cout << "Enter array size\n";
    cin >> a;
    cout << "Enter array\n";
    int *arr = new int[a]; // single pointer dynamic array

    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }
    cout << "Store array\n";
    for (int i = 0; i < a; i++)
    {
        cout << arr[i] << "\t";
    }
    delete[] arr;
    arr = NULL;
    cout << "\nagain\n";
    for (int i = 0; i < a; i++)
    {
        cout << arr[i] << "\t";
    }
}