#include <iostream>
using namespace std;
int main()
{

    int a, b;
    cout << "Enter two number" << endl;
    cin >> a >> b;

    try
    {
        if (b == 0)
        {
            throw b;
        }
        cout << a / b;
    }
    catch (int e)
    {
        cout << "can not be zero b";
       
    }




int i;
    int arr[2]={20,34};
    try
    {
       cout<<"Enter Index"<<endl;
    cin>>i;
    if (i>1)
    {
        throw i;
    }
    
    }
    catch(int d)
    {
        cout<<"Out of range";
    }
    


}
