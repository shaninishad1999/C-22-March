#include <iostream>
using namespace std;

int main()
{

    float p, c, m, total, per;
    cout << "Enter Marks of P.C.M. : \n";
    cin >> p >> c >> m;

    per = (p + c + m) / 3;
    total = p + c + m;

    if (p > 100 || c > 100 || m > 100)
    {
        cout << "invalid entry";
    }

    else if (per >= 35 && per < 50)
    {
        cout << "3rd rank :";
        cout << "\nYour total score :" << total;
        cout << "\nYou Percentage  :" << per;
    }
    else if (per >= 50 && per < 60)
    {
        cout << "2nd rank :";
        cout << "\nYour total score :" << total;
        cout << "\nYou Percentage  :" << per;
    }
    else if (per >= 60 && per <= 100)
    {
        cout << "1rd rank :";
        cout << "\nYour total score :" << total;
        cout << "\nYou Percentage  :" << per;
    }

    else if (p < 35 && c < 35 && m < 35)
    {

        cout << "You are Fail all subject";
        cout << "\nYou Total Score :" << total;
        cout << "\nYou Percentage  :" << per;
        cout << "\nPlease Give Re-Exam  :";
    }
    else if (p < 35 && c < 35 && m >= 35)
    {
        cout << "You are Fail in p & c ";
        cout << "\nYou Total Score :" << total;
        cout << "\nYou Percentage  :" << per;
    }
    else if (p < 35 && c >= 35 && m < 35)
    {
        cout << "You are Fail in p & m ";
        cout << "\nYou Total Score :" << total;
        cout << "\nYou Percentage  :" << per;
    }
    else if (p >= 35 && c < 35 && m < 35)
    {
        cout << "You are Fail in c & m ";
        cout << "\nYou Total Score :" << total;
        cout << "\nYou Percentage  :" << per;
    }

    else if (p < 35)
    {

        cout << "You Total Score : " << total;
        cout << "\nYou Percentage  :" << per;
        cout << "\nBut You Fail to in  P subject : " << p;
        cout << "\nYou Need to Improve Your P subject : " << p;
    }
    else if (c < 35)
    {

        cout << "You Total Score :" << total;
        cout << "\nYou Percentage  :" << per;
        cout << "\nBut You Fail to in  C subject : " << c;
        cout << "\nYou Need to Improve Your C subject : " << c;
    }
    else if (m < 35)
    {

        cout << "You Total Score :" << total;
        cout << "\nYou Percentage  :" << per;
        cout << "\nBut You Fail to in  M subject : " << m;
        cout << "\nYou Need to Improve Your M subject : " << m;
    }
}