/*Q.1 Problem :Two Pair Sum
Statement:Given an array of integers nums and an integer target,return indices of the two numbers such that they add up to target.
Input:v[]={2,4,6,11,8,12}, target=14
Output:[2,4]
*/

#include <iostream>
using namespace std;
int main()
{

    int count = 0;
    int arr[6] = {2, 4, 6, 11, 8, 12};
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; i < 6; j++)
        {
            /* code */
            if (arr[i] + arr[j] == 14)
            {
                count++;

                cout << arr[i] << " " <<arr[j];
            }
        }
    }
}