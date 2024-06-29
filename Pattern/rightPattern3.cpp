#include <iostream>
using namespace std;
int main()
{
    int i, j,n=1;

    for (int i = 1; i <= 5; i++)
    {
        for (int k = 5; k >=i ; k--)
        {
            cout << " ";
         }

        for (int j = 1; j <= i; j++)
        {
            cout <<n<<"";
            n++;
        }
       
        cout << "\n";
    }
}