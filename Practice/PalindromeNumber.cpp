#include <iostream>
using namespace std;
int main()
{

    int n, digit, sum = 0;
    cout << "Enter Number :";
    cin >> n; // 121
   int  temp=n;

    while (n != 0)
    {
        digit = n % 10;           // digit=1
        sum = (sum * 10) + digit; //
        n = n / 10;
    }
    cout << sum;

    if (temp==sum)
    {
       cout<<"\npolindrome number";
    }
    else{
        cout<<"\nnot polindrome number";
    }
    
}
