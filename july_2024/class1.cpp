// #include<iostream>
// using namespace std;
// class bhopal{
//     public:void show()  //public is acces specifier
//     {
//         cout<<"Welcome"; //it will take memory on runtime
//     }
// };
// int main(){
//     bhopal b;  //object call
//     b.show();   //object ke throw function call
    
// }

// #include<iostream>
// using namespace std;
// class bhopal{
//     int a;
//     public:void show()  //public is acces specifier
//     {
//         a++;
//         cout<<"Welcome"; //it will take memory on runtime
//     }
// };
// int main(){
//     bhopal b;  //object call
//     b.show();   //object ke throw function call
//     cout<<sizeof(b);
// }

// #include<iostream>
// using namespace std;
// class{

//     public:void show()  //public is acces specifier
//     {

//         cout<<"Welcome"; //it will take memory on runtime
//     }
// }j; //anonymous function
// int main(){

//     j.show();

// }

#include <iostream>
using namespace std;
class top1
{
public:
    void show(int n) // public is acces specifier
    {

        for (int i = 1; i <= 10; i++)
        {
            cout << i * n << "\n";
        }
    }
};

int main()
{
    int n;
    cout << "Enter number ";
    cin >> n;
    top1 t1;
    t1.show(n);
}
