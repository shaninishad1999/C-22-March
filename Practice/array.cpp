#include <iostream>
using namespace std;
int main()
{

    int a[5]={1,5,8,4,6}, i;
    int mx = a[0];
    cout << "Enter number : ";
    for (int i = 0; i < 5; i++)
    {

        if (mx < a[i])
        {
            mx = a[i];
        }
    }
    cout << mx;
}