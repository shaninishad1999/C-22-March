// bubble sort example

#include <iostream>
using namespace std;

int main()
{
    // int arr[] = {10, 20, 30, 60, 50, 10};
    int arr[] = {10, 50, 30, 100, 50, 60};
    int length = sizeof(arr) / sizeof(arr[0]);
    cout << "Before Swapping" << endl;
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "After Swapping" << endl;
    for (int i = 0; i < length; i++)
    {
            if (arr[i] > arr[i+1])
            {
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        
    }
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}
