#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter array size: ";
  cin >> n;

  // Input array elements
  int arr[n];
  cout << "Enter array elements:\n";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  // Display array before deletion
  cout << "Array before deletion:\n";
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << "\t";
  }
  cout << endl;

  // Input position to delete
  int pos;
  cout << "Enter position to delete (0 to " << n - 1 << "): ";
  cin >> pos;

  if (pos < 0 || pos >= n)
  {
    cout << "Invalid position!\n";
  }
  else
  {
    // Shift elements to the left from pos to end
    for (int i = pos; i < n - 1; i++)
    {
      arr[i] = arr[i + 1];
    }
    n--; // Decrease array size after deletion

    // Display array after deletion
    cout << "Array after deletion:\n";
    for (int i = 0; i < n; i++)
    {
      cout << arr[i] << "\t";
    }
    cout << endl;
  }

  return 0;
}
