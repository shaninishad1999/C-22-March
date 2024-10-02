// bubble sort example

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 20, 30, 60, 50, 10};
    int length = sizeof(arr) / sizeof(arr[0]); // Calculate the length of the array
 cout << "Before Swapping" << endl;
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " "; // Print each element
    }
 cout << endl;
    cout << "After Swapping" << endl;
    for (int i = 0; i < length; i++)
    {
        for (int j = i + 1; j < length; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}
