// default constrotor in c++ is the function name is similar to class name wihtout usig any parameter is callled default constrotor
// construtor does not have any type
/*
public:classname()
{
statement;
}
*/
// default constructor

// #include<iostream>
// using namespace std;
// class student{
//     public:student(){

//     cout<<"memory allocated\n";
//     }
//     void hello()
//     {
//         cout<<"hello";
//     }

// };
// int main(){
//     student s; //implicit calling
//     s.hello(); //explicit calling

// }

//object ko array ki tarah store kar stakte hai
//we can use array as a object
#include <iostream>
using namespace std;
class student
{
public:
    student(int a, int b)
    {
        cout << "Memory allcated a and b\n";
    }
    student()
    {
        cout << "\nconstructor overloading";
    }
};

int main()
{
    student d(4, 5);
    student g(8, 5);
    student r;
    student k;
}