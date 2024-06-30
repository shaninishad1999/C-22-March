#include <iostream>
using namespace std;
//back tracking 
int rec(int num, int at = 1)
{

    if (at > 3)
    {
        cout << "block code";
        return -1;
    }
    else if (num == 2025)
    {
        cout << "Your welcome";
        return 0;
    }
    else
    {
        cout << "Enter agin psd : ";
        cin >> num;
        return rec(num, at+1);

    }
}
int main()
{
    int n;
    cout << "Enter Passward : ";
    cin >> n;
     rec(n);
    
     
}