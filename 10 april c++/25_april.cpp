#include <iostream>
using namespace std;

// global variable
int a = 112;
int main()
{

    // int num1,num2;
    // cout<<"Enter First & second Number : ";
    // cin>>num1>>num2;

    // num1>num2?cout<<"first number greater": cout<<"second number greater";
    

        // local variable
        int a = 90, &b = a;
       b++;
        cout << a<<endl;
        cout << b;
    
}