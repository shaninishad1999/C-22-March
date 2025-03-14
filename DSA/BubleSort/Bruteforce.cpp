// #include<iostream>
// using namespace std;

// int main() {
//     int arr[] = {10, 20, 50, 60, 40, 30, 5};
//     int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

//     int maxElement = arr[0]; // Assume the first element is the maximum

//     // Iterate through the array to find the maximum element
//     for (int i = 1; i < n; i++) {
//         if (arr[i] > maxElement) {
//             maxElement = arr[i]; // Update maxElement if a larger element is found
//         }
//     }

//     // Print the maximum element found
//     cout << "The maximum element in the array is: " << maxElement << endl;

//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    // Example cases:
    // int arr[] = {10, 20, 30, 60, 50, 10};    // Random case
    // int arr[] = {60, 50, 40, 30, 20, 10};    // Worst case (descending order)
    // int arr[] = {10, 20, 30, 40, 50, 60};    // Best case (already sorted)
    int arr[] = {10, 20, 30, 1000, 40, 50};    // Random case (example)

    int length = sizeof(arr) / sizeof(arr[0]); // Calculate the length of the array

    // Print the array before sorting
    cout << "Before Swapping" << endl;
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " "; // Print each element
    }
    cout << endl;

    // Brute force bubble sort (no optimizations)
    cout << "After Swapping" << endl;
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length ; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // Swap the elements if they are in the wrong order
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Print the sorted array
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}

