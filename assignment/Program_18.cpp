/*18. Write a  program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer. Calculate percentage and grade according to following:
Percentage >= 90% : Grade A
Percentage >= 80% : Grade B
Percentage >= 70% : Grade C
Percentage >= 60% : Grade D
Percentage >= 40% : Grade E
Percentage < 40% : Grade F
*/

#include <iostream>
using namespace std;
int main()
{

    // data type delcaration
    float p, c, b, m, com, per;
    cout << "Enter 5 Subject Marks : " << endl; // message for display
    cin >> p >> c >> b >> m >> com;             // user input

    per = (p + c + b + m + com) / 5; // Percentage calculated

    // According to percetage  grade

    if (per>100)
    {
        cout<<"Please Enter Valid Input for Grade";
    }
    
    else if (per >= 90)
    {
        cout << "Grade A";
    }
    else if (per >= 80)
    {
        cout << "Grade B";
    }
    else if (per >= 70)
    {
        cout << "Grade C";
    }
    else if (per >= 60)
    {
        cout << "Grade D";
    }
    else if (per >= 40)
    {
        cout << "Grade E";
    }
    else if (per < 40)
    {
        cout << "Fail";
    }
    
}
