#include <iostream>
using namespace std;
int main()
{

        // polindrome number
         int n, sum = 0, rem;
         cout << "Enter number : ";
         cin >> n; // 121

        int realNum = n;  // store the real value of n for commering the value of if condition

        if (n > 99 && n < 1000)
        {

            while (n != 0)
            {
                rem = n % 10;           // rem=1  last digit       // rem=2              //rem=1
                sum = (sum * 10) + rem; // sum=0  sum=(0*10)+1=1  // sum=(1*10)+2=12      //sum=(12*10)+1=121
                n = n / 10;             // n=121/10 =12          // n=12/10=1             //n=1/10=0
            }

            if (sum == realNum)
            {
                cout << "Palindrome number  ";
            }
            else
            {
                cout << "Not Palindrome number ";
            }
        }
        else
        {
            cout << "Please Enter 3 digit number";
        }
    
    
    
    
    
    
    
    
    
    
    }
