// 2. Write a  program to find maximum between three numbers.

#include <iostream>
using namespace std;
int main()
{

    // data type and variable declaration
    float num1, num2, num3;
    cout << "Enter Two Number :" << endl;    //Message display
    cin >> num1 >> num2 >> num3;             //User input 

    if (num1 > num2 && num1 > num3)       //Checking codition of the  value form user input num1 greater from,num2,num3
    {
        cout << "Num1 is Greater : " << num1;
    }
    else if (num2 > num1 && num2 > num3)   //comparing the value form user input num2 greater,num1,num3
    {
        cout << "Num2 is Greater : " << num2;
    }
    else                      //comparing the value form user input num2 greater,num1,num3
    {
        cout << "Num3 is Greater : " << num3;
    }
}