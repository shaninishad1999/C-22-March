// bubble sort example

#include <iostream>
using namespace std;

int main()
{
    // int arr[] = {10, 20, 30, 60, 50, 10};

    // int arr[] = {10, 20, 30,40,50, 60};

    // case 1 Worst Case --> decending order give data
    // int arr[]={60,50,40,30,20,10};

    // case 2   Average Case --->
    //  int arr[]={30,20,50,10,40,60};

    //  case 3 Best case --> accending order
    // int arr[] = {10, 20, 30, 40, 50, 60};

    //   case 4 Random Case --> Random data
    int arr[] = {10, 20, 30, 1000, 40, 50};

    int length = sizeof(arr) / sizeof(arr[0]); // Calculate the length of the array
    cout << "Before Swapping" << endl;
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " "; // Print each element
    }
    cout << endl;
    int count;
    cout << "After Swapping" << endl;
    for (int i = 0; i < length; i++)
    {
        count=0;
        for (int j = 0; j < length - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                count++;
            }
        }
        if (count == 0)
        {
            cout<<"Sorted Array Already"<<endl;
            break;
        }
    }
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}
