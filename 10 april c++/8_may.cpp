#include <iostream>
using namespace std;

int main()
{

    char c;
    cout << "Enter any char : ";
    cin >> c;
    if (c >= 97 && c <= 122)
    {
        cout << char(c - 32);
    }
    else if (c >= 65 && c <= 92)

    {
        cout << char(c + 32);
    }
    else
    {
        cout << "other";
    }


  // unsigned  int a;
  //   cout<<"Enter number : ";
  //   cin>>a;
  
  //   cout<<a;
}
