#include <iostream>
#include <String>
using namespace std;

int main()
{

    // wap to eligble for vote or not

    // int age;
    // string choice;
    // cout<<"Enter Your age : "<<endl;
    // cin>>age;
    // cout<<"Enter you Indian"<<endl;
    // cin>>choice;

    // if (age>=18 && choice=="Yes")
    // {
    //     cout<<"You are eligible"<<endl;
    // }
    // else{
    //     cout<<"You are Not eligible "<<endl;
    // }

    // wap to determine whether a number is a 3 digit or not
    // int number;
    // cout << "Enter Number : ";
    // cin >> number;
    // if (number >= 100 && number <= 999)
    // {
    //     cout << "Enter Number is 3 digit" << endl;
    // }
    // else
    // {
    //     cout << "Enter Number is not 3 digit" << endl;
    // }

    // Write a program to take two number from user and check who is max.

    // float num1,num2;
    // cout<<"Enter Number First : ";
    // cin>>num1;
    // cout<<"Enter Number Second ";
    // cin>>num2;

    // if (num1>num2)
    // {
    //     cout<<"First number is greater"<<endl;
    // }
    // else
    // {
    //     cout<<"Second number is greater"<<endl;
    // }

    // Write a program to take input age of male or Female and check he/she is eligible for marriage or not.
    //  ask age and gender.
    // int age;
    // string gender;

    // cout << "Enter age : ";
    // cin >> age;
    // if (age >= 22 && age <= 50)
    // {
    //     cout << "You are eligible for marriage" << endl;
    //     cout << "What is your age : " << age << endl;
    //     cout << "Told me your gender : ";
    //     cin >> gender;
    // }
    // else
    // {
    //     cout << "You are not eligible for marriage" << endl;
    //     cout << "What is your age : " << age << endl;
    //     cout << "Told me your gender : ";
    //     cin >> gender;
    // }

    // Write a program to Take values of length and breadth of a rectangle from user
    //  and check if it is square or not.
    // int length,breadth;
    // int value;
    // cout<<"Enter length : ";
    // cin>>length;
    // cout<<"Enter breadth";
    // cin>>breadth;

    // if (length==breadth)
    // {
    //     cout<<"Is a square :"<<length*breadth<<endl;
    // }
    // else{
    //     cout<<"Is not a square : "<<length*breadth<<endl;
    // }

    // Write a program to Take values of length and breadth of a rectangle from user ,also
    //  Take value of side of a square from user ,and check which area is greater.
    //  int length,breadth,square_value;
    //     int rect_area, square_area;
    //     cout<<"Enter length : ";
    //     cin>>length;
    //     cout<<"Enter breadth : ";
    //     cin>>breadth;
    //     rect_area=length*breadth;

    //     cout<<"Square value : ";
    //     cin>>square_value;

    //     square_area=square_value*square_value;

    // if (rect_area > square_area)
    // {
    //     cout<<"Rectangle area is greater"<<endl;
    // }
    // else{
    //     cout<<"Squae area is greater";
    // }

    // Write a C++ program to find maximum between three numbers

    // int a,b,c;
    // cout<<"Enter first number : ";
    // cin>>a;
    // cout<<"Enter second number : ";
    // cin>>b;
    // cout<<"Enter third number : ";
    // cin>>c;

    // if (a>b && a>c)
    // {
    //     cout<<"a is greater";
    // }
    // else if (b>a && b>c)
    // {
    //     cout<<"b is greater";
    // }
    // else{
    //     cout<<"c is greater";
    // }

    // Write a  program to input a cost of a pen and calculate 70 pens cost with some discount.
    //  if total pen cost greater than 1000 then we calculate 20% discount otherwise 10%.

    // int pen_price, pen_cost;
    // float pen_discount_70, pen_discount_20;
    // cout << "Enter pen price : ";
    // cin >> pen_price;
    // pen_cost = pen_price * 70;

    // cout << "Total pen cast : " << pen_cost << endl;

    // if (pen_cost > 1000)
    // {
    //     pen_discount_70 = pen_cost * (20.0 / 100);
    //     cout << "20 percent discount : " << pen_discount_70;
    // }
    // else
    // {
    //     pen_discount_20 = pen_cost * (10.0 / 100);
    //     cout << "10 percent discount : " << pen_discount_20;
    // }

    //  Write a program to read the value of an integer m and display the message "ok" when m is larger than 0,
    // display the message "bye" when m is 0 and display the message "done" when m is less than 0.

    // int m;
    // cout << "Enter an integer value for m : ";
    // cin >> m;
    // if (m > 0)
    // {
    //     cout << "ok";
    // }
    // else if (m == 0)
    // {
    //     cout << "bye";
    // }
    // else
    // {
    //     cout << "done";
    // }

    // Write a program to A school has following rules for grading system:
    // a. Below 25 - F
    // b. 25 to 45 - E
    // c. 45 to 50 - D
    // d. 50 to 60 - C
    // e. 60 to 80 - B
    // f. Above 80 - A

    //  Ask user to enter marks and print the corresponding grade.

    // int num;
    // cout << "Enter Number : ";
    // cin >> num;

    // if (num < 25)
    // {
    //     cout << "Greade F  : " << num;
    //     ;
    // }
    // else if (num >= 25 && num < 45)
    // {
    //     cout << "Greade E  : " << num;
    //     ;
    // }
    // else if (num >= 45 && num < 50)
    // {
    //     cout << "Greade D : " << num;
    // }
    // else if (num >= 50 && num < 60)
    // {
    //     cout << "Greade C : " << num;
    // }
    // else if (num >= 60 && num < 80)
    // {
    //     cout << "Greade B : " << num;
    // }
    // else
    // {
    //     cout << "Greade A : " << num;
    // }

    // Write a C program to read temperature in centigrade and display a suitable message according to the temperature state below:
    // Temp < 0 then Freezing weather
    // Temp 0-10 then Very Cold weather
    // Temp 10-20 then Cold weather
    // Temp 20-30 then Normal in Temp
    // Temp 30-40 then Its Hot
    // Temp >=40 then Its Very Hot

    // int temp;

    // cout << "Enter the temperature in Celsius: ";
    // cin >> temp;
    // if (temp < 0)
    // {
    //     cout << "Freezing weather";
    // }
    // else if (temp >= 0 && temp < 10)
    // {
    //     cout << "Very Cold weather";
    // }
    // else if (temp >= 10 && temp < 20)
    // {
    //     cout << " Cold weather";
    // }
    // else if (temp >= 20 && temp < 30)
    // {
    //     cout << " Normal in Temp";
    // }
    // else if (temp >= 30 && temp < 40)
    // {
    //     cout << "Its Hot";
    // }
    // else
    // {
    //     cout << " Its Very Hot";
    // }

    // Write a  program to determine eligibility for admission to a professional course based on the following criteria:
    // Marks in Maths >=65
    // Marks in Phy >=55
    // Marks in Chem>=50
    // Total in all three subject >=190

    // int mark, math, phy, chem;
    // cout << " mark : ";
    // cin >> math >> phy >> chem;
    // if (math >= 65 && phy >= 50 && chem >= 50)
    // {
    //     mark = math + phy + chem;

    //     if (mark >= 190)
    //     {

    //         cout << "You are eligible for admission Total mathe + phy + chem = " << mark << endl;
    //     }
    //     else
    //     {
    //         cout << "You are not eligible for admission mathe + phy + chem = " << mark;
    //     }
    // }
    // else
    // {
    //     cout << "Not eligible due to individual subject marks requirement";
    // }

    // 192

    // string name, address, ch;
    // int net_amount;
    // double amount, discount, purchase;
    // cout << "Enter Name and Address and amount";
    // cin >> name >> address >> amount;

    // cout << "Enter Which typeof purchase for laptop 'L' and desktop for 'D'";
    // cin >> ch;

    // if (ch == "L")
    // {
    //     if (amount > 0 && amount <= 25000)
    //     {
    //         cout << "No discont" << amount;
    //     }
    //     else if (amount > 25001 && amount <= 50000)
    //     {
    //         discount = amount * (5.0 / 100);
    //         int net_amount = amount - discount;
    //         cout << "After discount Total amount : " << net_amount;
    //     }
    //     else if (amount > 50001 && amount <= 100000)
    //     {
    //         discount = amount * (7.5 / 100);
    //         int net_amount = amount - discount;
    //         cout << "After discount Total amount : " << net_amount;
    //     }
    //     else
    //     {
    //         discount = amount * (10.0 / 100);
    //         int net_amount = amount - discount;
    //         cout << "After discount  Total amount : " << net_amount;
    //     }
    // }
    // else if(ch == "D")
    // {

    //     if (amount > 0 && amount <= 25000)
    //     {
    //         discount = amount * (5.0 / 100);
    //         cout << "after  discont" << amount;
    //     }
    //     else if (amount > 25001 && amount <= 50000)
    //     {
    //         discount = amount * (7.5 / 100);
    //         int net_amount = amount - discount;
    //         cout << "After discount Total amount : " << net_amount;
    //     }
    //     else if (amount > 50001 && amount <= 100000)
    //     {
    //         discount = amount * (10.0 / 100);
    //         int net_amount = amount - discount;
    //         cout << "After discount Total amount : " << net_amount;
    //     }
    //     else
    //     {
    //         discount = amount * (15.0 / 100);
    //         int net_amount = amount - discount;
    //         cout << "After discount  Total amount : " << net_amount;
    //     }
    // }

    // 193
    // int total_amount;
    // int discount,net_amount;
    // cout<<"Enter Total cast : ";
    // cin>>total_amount;
    // if (total_amount>=0 && total_amount<2000)
    // {
    //     discount=total_amount*(5.0/100);
    //     net_amount=total_amount-discount;
    //     cout<<"after discount paid money : "<<net_amount;
    // }
    // else if(total_amount>=2001 && total_amount<5000)
    // {
    //     discount=total_amount*(25.0/100);
    //     net_amount=total_amount-discount;
    //     cout<<"after discount paid money : "<<net_amount;
    // }
    // else if(total_amount>=5001 && total_amount<10000)
    // {
    //     discount=total_amount*(35.0/100);
    //     net_amount=total_amount-discount;
    //     cout<<"after discount paid money : "<<net_amount;
    // }
    // else{
    //         discount=total_amount*(50.0/100);
    //     net_amount=total_amount-discount;
    //     cout<<"after discount paid money : "<<net_amount;
    // }

    // Write a program that accepts a number from user and calculate whether it is positive or negative or zero

    // int number;

    // cout << "Enter Your Number : ";
    // cin >> number;
    // if (number > 0)
    // {
    //     cout << "Number is Positive : " << number;
    // }
    // else if (number == 0)
    // {
    //     cout << "Number is not positive nor negative : " << number;
    // }
    // else
    // {
    //     cout << "Number is negative : " << number;
    // }

    // Write a program to calculate whether year is leap year or not?

    // int year;

    // cout << "Enter Any Year : ";
    // cin >> year;

    // if (year % 4 == 0)
    // {
    //     if (year % 100 != 0 || year % 400 == 0)
    //     {
    //         /* code */
    //     }

    //     cout << "Leap Year ";
    // }
    // else
    // {
    //     cout << "Not Leap Year ";
    // }

    // Write a program to calculate whether a character is vowel or consonant.

    // char ch;
    // cout << "Enter Your Character : ";
    // cin >> ch;

    // if (ch == 'a'||'A' || ch == 'e'||'E' || ch == 'i'||'I' || ch == 'o'||'O' || ch == 'u'||'U')
    // {
    //     cout << "You Enter Vovels character : " << ch;
    // }
    // else
    // {
    //     cout << "You Enter Consonents character : " << ch;
    // }

    // char ch;
    // cout << "Enter Your Character : ";
    // cin >> ch;
    // switch (ch)
    // {
    // case  'a':
    // case  'e':
    // case  'i':
    // case  'o':
    // case 'u':
    //     cout << "vovels : " << ch;
    //     break;

    // default:
    //     cout << "consonents : " << ch;
    //     break;
    // }

    // Write a program to calculate whether character is in lowercase or uppercase.
    // char ch;
    // cout << "Enter Your character : ";
    // cin >> ch;

    // if (ch >= 'A' && ch <= 'Z')
    // {
    //     cout << "Upper case";
    // }
    // else if (ch >= 'a' && ch <= 'z')
    // {
    //     cout << "lovercse";
    // }
    // else
    // {
    //     cout << "None Entery";
    // }

    // Write a program to calculate smallest number out of given three numbers.

    // int num1, num2, num3;
    // cout << "Enter Three Number : ";
    // cin >> num1 >> num2 >> num3;

    // if (num1 >= num2 && num1 >= num3)
    // {
    //     if (num1 >= num2 & num1 >= num3)
    //     {
    //         cout << "First number is greatest : " << num1;
    //     }
    //     else if (num2 >= num1 && num2 >= num3)
    //     {
    //         cout << "second  number is greatest : " << num2;
    //     }

    //     else if (num3 >= num1 && num3 >= num2)
    //     {
    //         cout << "Third  number is greatest : " << num2;
    //     }
    // }
    // else if (num2 >= num1 && num3 >= num3)
    // {
    //     if (num1 >= num2 & num1 >= num3)
    //     {
    //         cout << "First number is greatest : " << num1;
    //     }
    //     else if (num2 >= num1 && num2 >= num3)
    //     {
    //         cout << "second  number is greatest : " << num2;
    //     }

    //     else if (num3 >= num1 && num3 >= num2)
    //     {
    //         cout << "Third  number is greatest : " << num2;
    //     }
    // }
    // else
    // {
    //     if (num1 >= num2 & num1 >= num3)
    //     {
    //         cout << "First number is greatest : " << num1;
    //     }
    //     else if (num2 >= num1 && num2 >= num3)
    //     {
    //         cout << "second  number is greatest : " << num2;
    //     }

    //     else if (num3 >= num1 && num3 >= num2)
    //     {
    //         cout << "Third  number is greatest : " << num2;
    //     }
    // }

    // A shop will give discount of 10% if the cost of purchased quantity is more than 1000.
    // Ask user for quantity
    // Suppose, one unit will cost 100.
    // Judge and print total cost for user.

    // int quantity,cost=100,total_cost;
    // double discount,net_amount,Net_amount;

    // cout<<"Enter Quantity : ";
    // cin>>quantity;

    // if (quantity>1000)
    // {
    //     total_cost=cost*quantity;
    //     discount=total_cost*(10.0/100);
    //     Net_amount=total_cost-discount;
    //     cout<<"Total Cost amount : "<<total_cost<<endl;
    //     cout<<"Total discount amount : "<<discount<<endl;
    //     cout<<"Total Paybell amount : "<<Net_amount;

    // }
    // else{
    //     cout<<"discount Not available in this quantity : "<<quantity;
    // }

    // Write a program to Take values of length and breadth of a rectangle from user
    //  and check if it is square or not.

    // int b, l;
    // cout << "Enter length and breadth : ";
    // cin >> b >> l;

    // if (b == l)
    // {
    //     cout << "It is square : " << b * b;
    // }
    // else
    // {
    //     cout << "It is not square : " << b * l;
    // }

    // Write a program to take input age of male or Female and check he/she is eligible for marriage or not.
    //  ask age and gender.

    // int age;
    // string gender;
    // char ch;

    // cout << "Enter age of male 'M' or female 'F' : ";
    // cin >> ch;

    // if (ch == 'M' || ch == 'm')
    // {
    //     if (age > 21 && age <= 50)
    //     {
    //         cout << "You are eligible for marriage." << endl;
    //     }
    //     else
    //     {
    //         cout << "You are not eligible for marriage yet." << endl;
    //     }
    // }
    // else if (ch == 'F' || ch == 'f')
    // {
    //     if (age > 18 & age<=50)
    //     {
    //         cout << "You are eligible for marriage." << endl;
    //     }
    //     else
    //     {
    //         cout << "You are not eligible for marriage yet." << endl;
    //     }
    // }

    // A company decided to give bonus of 5% to employee if his/her year of service is more than 5 years.
    // Ask user for their salary and year of service and print the net bonus amount.

    // int ser_year, sallary;
    // double bonus;
    // double net_sallary;
    //   cout << "Enter Your ser_year : ";
    //   cin>>ser_year;
    // if (ser_year > 5)
    // {

    //     cout << "Enter Your salary : ";
    //     cin >> sallary;
    //     bonus = sallary * (5.0 / 100);
    //     cout << "bonus : " << bonus <<endl;
    //     sallary=sallary+bonus;
    //     cout << "total : " <<sallary ;
    // }
    // else
    // {
    //     cout << "No Discount";
    // }

    
}