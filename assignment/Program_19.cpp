/*19. Write a  program to input basic salary of an employee and calculate its Gross salary according to following:
Basic Salary <= 10000 : HRA = 20%, DA = 80%
Basic Salary <= 20000 : HRA = 25%, DA = 90%
Basic Salary > 20000 : HRA = 30%, DA = 95%

*/

#include <iostream>
using namespace std;
int main()
{

    // data type delcaration
    float B_salary, hra, da, G_salary;
    cout << "Enter  Basic Salary of an Employee: " << endl; // message for display
    cin >> B_salary;                                        //taking input from user

    // Calculated   according to basic salary
    if (B_salary <= 10000)
    {
        hra = (20.0 / 100) * 10000;
        da = (80.0 / 100) * 10000;

        // Calculate gross salary
        G_salary = B_salary + hra + da;
        // Expected output
        cout << "Gross Salary: " << G_salary << endl;
    }
    else if (B_salary <= 20000)
    {
        hra = (25.0 / 100) * 20000;
        da = (90.0 / 100) * 20000;
        // Calculate gross salary
        G_salary = B_salary + hra + da;
        // Expected output
        cout << "Gross Salary: " << G_salary << endl;
    }
    else if (B_salary > 20000)
    {
        hra = (30.0 / 100) * 20000;
        da = (95.0 / 100) * 20000;
        // Calculate gross salary
        G_salary = B_salary + hra + da;
        // Expected output
        cout << "Gross Salary: " << G_salary << endl;
    }

    // this code is can reduce line of code

    /*if (B_salary<=10000)
     {
         hra=(20.0/100)*10000;
         da=(80.0/100)*10000;
     }
     else if (B_salary<=20000)
     {
         hra=(25.0/100)*20000;
         da=(90.0/100)*20000;

     }
     else if (B_salary>20000)
     {
         hra=(30.0/100)*20000;
         da=(95.0/100)*20000;

     }
// Calculate gross salary
        G_salary = B_salary + hra + da;
        // Expected output
        cout << "Gross Salary: " << G_salary << endl;
     */
}