// wap to display n natural nmber start from 1

#include <iostream>
using namespace std;

int main()
{

    // int n,i;
    // cout<<"Eneter number : ";
    // cin>>n;
    // i=n;
    // while (i>=1)
    // {
    //     cout<<"Number : "<<i<<endl;
    //     // i++;
    //     i--;
    // }

    //  wap to display the  multiplication table of a number n

    int i = 1, n;
    cout << "Eneter number : ";
    cin >> n;
    while (i <= 10)
    {
        // cout << "Number : " << i * n << endl;
        cout << "Number : " <<n<<" X "<<i<<" = "<<n*i << endl;
        i++;
    }
}