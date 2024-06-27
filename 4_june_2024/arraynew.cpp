#include <iostream>
using namespace std;
void show(int *a, int s)
{
  int mx =a[0];
  for (int i = 0; i < s; i++)
  {
   
    if (a[i] > mx)
    {
      mx = a[i];
    }
  }
  cout<<"mx= "<<mx;
}
int main()
{
  int arr[] = {
    20, 1, 81, 6, 91};
  int s = 5;
  show(arr, s);
}