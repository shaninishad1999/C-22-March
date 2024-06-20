#include <iostream>
using namespace std;
int main()
{
    int i, j, m, n;
    cout << "Enter Row : ";
    cin>>m;
    cout<<"Enter Coumn : ";
    cin>>n;
    int a[m][n];

    cout<<"Enter array elemtns : \n";
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            cin>>a[i][j];
        }
        
    }
    cout<<"Stroe elements \n";
      for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            cout<<"\t"<<a[i][j];
        }
        cout<<"\n";
    }
    cout<<"Stroe addres elements \n";
      for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            cout<<"\t"<<&a[i][j];
        }
        cout<<"\n";
    }

    

}