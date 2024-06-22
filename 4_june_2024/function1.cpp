#include <iostream>
using namespace std;

// no return & without parameter

int c;
void add(int a, int b)
{
     c = a + b;
}
void show()  //no return & without parameter
{
    cout << "sum = " << c;
}
int main()
{
    int x,y;
    cout<<"enter two number \n";
    cin>>x>>y;
    add(x,y);//with parameter
    show(); //without parameter
}
