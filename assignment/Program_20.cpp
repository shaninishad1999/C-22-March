/*20. Write a  program to input electricity unit charges and calculate total electricity bill according to the given condition:
For first 50 units Rs. 0.50/unit
For next 100 units Rs. 0.75/unit
For next 100 units Rs. 1.20/unit
For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill
*/

#include <iostream>
using namespace std;
int main()
{

    // data type delcaration
    float unit, unit_price, sur_charge;
    cout << "Enter Electricity Unit : " << endl; // message for display
    cin >> unit;                                 // taking input from user

    // according to unit to excute the condtion
    if (unit < 0)
    {
        cout << "Please Enter Valid Input";
    }

    // Calculated price according to unit+additinal charge
    else if (unit > 0 && unit < 50)
    {
        unit_price = unit * .50;
        sur_charge = unit_price + (20.0 / 100);
        cout << "Total Electricity Bill After Additional Surcharge : " << sur_charge;
    }
    else if (unit >= 50 && unit < 150)
    {
        unit_price = unit * .75;
        sur_charge = unit_price + (20.0 / 100);
        cout << "Total Electricity Bill After Additional Surcharge : " << unit_price;
    }
    else if (unit >= 150 && unit < 250)
    {
        unit_price = unit * 1.20;
        sur_charge = unit_price + (20.0 / 100);
        cout << "Total Electricity Bill After Additional Surcharge : " << unit_price;
    }
    else if (unit >= 250)
    {
        unit_price = unit * 1.50;
        sur_charge = unit_price + (20.0 / 100);
        cout << "Total Electricity Bill After Additional Surcharge: " << unit_price;
    }

    // this code is can reduce line of code

    /* if (unit > 0 && unit <= 50)
      {
          unit_price = unit * .50;
          sur_charge=unit_price+(20.0/100);
      }
      else if (unit > 50 && unit <= 150)
      {
          unit_price = unit * .75;
          sur_charge=unit_price+(20.0/100);
      }
      else if (unit > 150 && unit <= 250)
      {
          unit_price = unit * 1.20;
          sur_charge=unit_price+(20.0/100);
      }
      else if (unit >= 250)
      {
          unit_price = unit * 1.50;
          sur_charge=unit_price+(20.0/100);
      }
          // Expected output
      cout << "Total Electricity Bill After Additional Surcharge : " << sur_charge;

      */
}