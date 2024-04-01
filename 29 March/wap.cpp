#include <iostream>
using namespace std;
int main()
{
    int age;
    string choice;
    cout << "Enter Your age :" << endl;
    cin >> age;
    cout << "Are u indian type 'Yes' or 'No' " << endl;
    cin >> choice;
    if (age >= 18 && choice == "Yes")
    {
        cout << "You are eligible";
    }
  
}



// Online C++ compiler to run C++ program online
// #include <iostream>
// using namespace std;
// int main()
// {
//     int number;
   
//     cout << "Enter Your age :" << endl;
//     cin >> number;
  
//     if (number >= 100 && number <= 999)
//     {
//         cout << "You are 3 number";
//     }
//     else{
//         cout<<"not";
//     }
// }


// // Online C++ compiler to run C++ program online
// #include <iostream>
// using namespace std;
// int main()
// {
//   double salary,year,bonus;
   
//     cout << "tell me your sallary : " << endl;
//     cin >> salary;
//     cout << "tell me your year : " << endl;
//     cin >> year;
//     if(year>=5){
//         bonus=salary*(5.0/100);
//         cout<<"You are eligible for bonus 5%="<<bonus+salary<<endl;
        
//     }
//     else{
//         cout<<"you are not eligible bonus"<<endl;
//     }
    
   
   
// }