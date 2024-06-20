/*Q.5 Given a sorted array of n elements, possibly with duplicates, find the number of occurrences of the target element.
Input: arr = [4, 4, 8, 8, 8, 15, 16, 23, 23, 42], target = 8
Output: 3

*/
#include <iostream>
using namespace std;
int main()
{

 
    int count=0;
    int arr[10] = {4, 4, 8, 8, 8, 15, 16, 23, 23, 42};
    for (int i = 0; i < 10; i++)
    {

        if (arr[i] == 8)
        {
            count++;
           
        }
    }
            cout<<count;
}