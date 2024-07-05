#include <iostream>
using namespace std;
class top
{
    // multi function
    //  public:void sum(){
    //  cout<<"hello\n";
    //  }
    //  void show(){
    //      cout<<"Show function\n";
    //  }
    //  void display(){
    //      cout<<"display function";
    //  }

   
   
   
   
    // fucntion overloading

// public:
//     void sum(int a, int b)
//     {
//         cout << "function 1 overload \n";
//         cout << "sum = " << a + b << endl;
//     }
//     void sum(float a, float b)
//     {
//         cout << "function 2 overload \n";
//         cout << "sum = " << a + b << endl;
//     }
//     void sum(double a, double b)
//     {
//         cout << "function 3 overload \n";
//         cout << "sum = " << a + b << endl;
//     }

//     void sum()
//     {
//         cout << "function overload\n";
//     }


//function overriding

public:
    void sum(int a, int b)
    {
        cout << "function 1 overload \n";
        cout << "sum = " << a + b << endl;
    }
    void sum(float a, float b)
    {
        cout << "function 2 overload \n";
        cout << "sum = " << a + b << endl;
    }
    void sum(double a, double b)
    {
        cout << "function 3 overload \n";
        cout << "sum = " << a + b << endl;
    }

    void sum()
    {
        cout << "function overload\n";
    }





};
int main()
{
    // mulit funciton
    //  top k;
    //  k.sum();
    //  k.show();
    //  k.display();

    // function overloading

    // top l;
    // l.sum(5,8);
    // l.sum((float)5,(float)5);
    // l.sum(5.45,5.12);  //by default compiler taken value double
}