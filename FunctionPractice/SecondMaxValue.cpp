#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;

    int arr[n]; // Variable length array declaration

    cout << "Enter array elements: \n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Display entered elements
    cout << "Stored elements: \n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << "\t";
    }

    // Initialize mx1 and mx2 with first element of the array
    int mx1 = arr[0];
    int mx2 = arr[0];

    // Find the two largest numbers in the array
    for (int i = 0; i < n; i++) {
        if (arr[i] > mx1) {
            mx2 = mx1; // Update mx2 to the previous mx1
            mx1 = arr[i]; // Update mx1 to the current array element
        } else if (arr[i] > mx2 && arr[i] != mx1) {
            mx2 = arr[i]; // Update mx2 if current element is greater than mx2 and not equal to mx1
        }
    }

    // Display the two largest numbers
    cout << "\nLargest 1 = " << mx1 << "\t";
    cout << "\nLargest 2 = " << mx2 << "\t";

    return 0;
}
