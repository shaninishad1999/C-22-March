#include <iostream>
using namespace std;
void isPattern(int m, int n)
{
    int j;
    for(int i=1;i<=m;i++)
    {
        for (int k = 1; k <=n; k++)
        {
          cout<<" ";
        }
        
      for (int j = 1; j <=n ; j++)
      {
        cout<<i;
      }
      cout<<"\n";
      
    }
}
int main()
{
    int x, y;
    cout << "enter size : \n";
    cin >> x >> y;
    isPattern(x, y);
}