// #include<iostream>
// using namespace std;
// //single class
// //declare and inisilization
// // function declare and define insise a class
// class top{
//     int a,b,c;
//     public:void sum(int x,int y)
//     {
//         a=x;
//         b=y;
//         c=a+b;
//     }
// void show(){
//     cout<<"Result = "<<c;
// }
// };

// int main(){
//     top t;
//     int s,b;
//     cout<<"Enter two Number \n";
//     cin>>s>>b;
//     t.sum(s,b);
//     t.show();

// }

// #include <iostream>
// using namespace std;

// // function declare insise a class but  define outside  a class
// class top
// {
//     int a, b, c;

// public:
//     void sum(int x, int y);
//     void show();
// };
// //outside function
// void top::sum(int x, int y)
// {
//     a = x;
//     b = y;
//     c = a + b;
// };
// void top::show()
// {
//     cout << "Result = " << c;
// };

// int main()
// {
//     top t;
//     int s, b;
//     cout << "Enter two Number \n";
//     cin >> s >> b;
//     t.sum(s, b);
//     t.show();
// }





// #include <iostream>
// using namespace std;

// // function declare insise a class but  define outside  a class
// class top
// {
//     int a, b, c;

// public: void sum(int a, int b)
// {
//     a = a;
//     b = b;
//     c = a + b;
// }
// void show()
// {
//     cout <<a<<" + "<<b<<" = " << c;
// } 
// };

// int main()
// {
//     top t;
//     int s, b;
//     cout << "Enter two Number \n";
//     cin >> s >> b;
//     t.sum(s, b);
//     t.show();
// }


#include <iostream>
using namespace std;

// this keywprd use
class top
{
    int a, b, c;

public: void sum(int a, int b)
{
   this-> a = a;
   this-> b = b;
    c = a + b;
}
void show()
{
    cout <<a<<" + "<<b<<" = " << c;
} 
};

int main()
{
    top t;
    int s, b;
    cout << "Enter two Number \n";
    cin >> s >> b;
    t.sum(s, b);
    t.show();
}