#include <iostream>
using namespace std;
int main()
{
   // armstrong number

    int n;
    cout<<"Enter number : ";
    cin>>n;//153

    if (n>=100 && n<1000)
    {
        int a=n/100;  //a=1
        int b=(n%100)/10;  // b=5
        int c=(n%100)%10;  //c=3
        if (a*a*a+b*b*b+c*c*c==n)
        {
            cout<<"Armstrong number ";
        }
        else
        {
            cout<<"Not Armstrong number ";
        }
    }
    else{
        cout<<"Please enter valid input";
    }

    int num, temp,rm=0;
    cout << "Enter number :";
    cin >> num; // 153

    temp = num;
    
    if (num > 99 && num < 1000)
    {

        while (num > 0)
        {
            int a = num % 10;    // a=3      //num=15,a=5   // a=1,num=1
            rm = rm + a * a * a; // rm=0+3*3*3=27  // rm=27+5*5*5=152 // rm=152+1*1*1=153
            num = num / 10;      // num=153/10=15  //num=15/10=1  // num=1/10=0
        }
        if (rm==temp)
        {
            cout << "Armstrong Number";
        }
        else
        {
            cout << "Not Armstrong number";
        }
    }
        else
        {
            cout << "Please Enter Three digit number";
        }

}