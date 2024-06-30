
#include <iostream>
using namespace std;


void display(int *k,int l)
{
    // int f=0
    for (int i = 0; i < l; i++)
    {
        int f = 0;
        for (int j = 2; j <= k[i]/2; j++)
        {

            if (k[i] % j == 0)
            {
                f = 1;
            }
        }
        if (f == 0)
        
        {
            cout << k[i] << "\t";
        }
    }
}
int main()
{
    int a[] = {20, 6, 18, 39, 8};
    int s=sizeof(a)/sizeof(a[0]);
    display(a,s);

} // namespace std;int main()