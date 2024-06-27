#include<iostream>
using namespace std;


int arrUser(int arr[], int n) {
    

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int mx = arr[0]; 
    for (int i = 0; i < n; i++) {
        if (arr[i] > mx) {
            mx = arr[i];
        }
    
    }
    
    cout << "mx = " << mx << endl; 
    return mx; 
}

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;
    int arr[n]; 
    
    arrUser(arr, n);

    return 0;
}
