// 13. Write a  program to count total number of notes in given amount.

#include <iostream>
using namespace std;
int main()
{

   // data type and variable declaration
    int amount, rm, number;
    cout << "Enter  Amount :" << endl; // message for display
    cin >> amount;                     // 1388                //taking input from user

    number = amount / 100;  //number=13
    cout << "Notes of 100 : " << number<<endl;

    rm=amount-number*100;   //rm=88  ,rm=remain-number
    number=rm/50;           //number=1
    cout<<"Notes of 50 : "<<number<<endl;

    rm=rm-number*50;        //rm=38
    number=rm/20;          
    

    cout<<"Notes of 20 : "<<number<<endl;

    rm=rm-number*20;       //rm=18
    number=rm/10;          //number=1

    cout<<"Notes of 10 : "<<number<<endl;

    rm=rm-number*10;       //rm=8
    number=rm/5;          //number=1

    cout<<"Notes of 5 : "<<number<<
    endl;

    rm=rm-number*5;      //rm=3
    number=rm/2;         //number=1

    cout<<"Notes of 2 : "<<number<<endl;

    rm=rm-number*2;      //rm=1
    number=rm/1;         //number=1

    cout<<"Notes of 1 : "<<number<<endl;




}