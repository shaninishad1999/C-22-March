#include <iostream>
using namespace std;

void cmnfactor(int x, int y)
{

    int hcf = x > y ? x : y;
    for (int i = 1; i <= hcf; i++)
    {

        if (x % hcf == 0 && y % hcf == 0)
        {
            cout << "\t" << hcf;
            break;
        }
        hcf--;
    }
}

int main()
{
    int n, m;
    cout << "Enter Two number : ";
    cin >> m >> n;
    cmnfactor(n, m);
}