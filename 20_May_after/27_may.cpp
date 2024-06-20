#include <iostream>
using namespace std;
int main()
{

    //wap to reverse the digit
    // int n;
    // cout << "Enter number :";
    // cin >> n;
    
    // int sum = 0, digit;
    // while (n != 0)
    // {
    //     digit = n % 10;
    //     sum = (sum * 10) + digit;
    //     n = n / 10;
    // }
    // cout << sum;

//sum of digit
    // int sum = 0, digit;
    // while (n != 0)
    // {
    //     digit = n % 10;
    //     sum = sum + digit;
    //     n = n / 10;
    // }
    // cout << sum;


//   wap to print  


    int n1,n2;
    cout<<"Enter Two Number : ";
    cin>>n1>>n2;
    int mx=n1>n2?n1:n2;

    while (true)
    {
        if (mx%n1==0 && mx%n2==0)
        {
            cout<<mx;
            break;
        }
        mx++;
        
    }

   

    
   


}