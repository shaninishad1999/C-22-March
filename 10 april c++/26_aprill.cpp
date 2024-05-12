#include <iostream>
using namespace std;

int main()
{

    // int a = 'a';
    // int &b = a;
    // char ch='p';
    // // b++;

    // cout <<sizeof(a)<<" "<<&a << endl;
    // cout <<sizeof(b)<<" "<<&b << endl;
    // cout <<sizeof(ch)<<" "<<(void*)&ch << endl;

    float p, r, t, si;
    cout << "Enter Principle : \n";
    cin >> p;
    cout << "Enter Rate of interest :\n";
    cin >> r;
    cout << "Enter Time : \n";
    cin >> t;
    si = (p * r * t) / 100;
    cout << "Simple Interest : \n"
         << si << "\nTotal : " << si + p;
}