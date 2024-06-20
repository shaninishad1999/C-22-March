/*
Q.6 Given a sorted array of n elements, find the number of occurrences of each element.
Input: arr = [4, 4, 8, 8, 8, 15, 16, 23, 23, 53]
Output: 4=2
               8=3
              15=1
              23=2
              53=1

*/


#include <iostream>
using namespace std;
int main()
{

 
    int a=0,b=0,c=0,d=0,e=0,f=0;
    int arr[10] = {4, 4, 8, 8, 8, 15, 16, 23, 23, 42};
    for (int i = 0; i < 10; i++)
    {

        if (arr[i] == 4)
        {
            a++;
            
        }
        if (arr[i] == 8)
        {
            b++;
        }
        if (arr[i] == 15)
        {
            c++;
        }
        if (arr[i] == 16)
        {
            d++;
        }
        if (arr[i] == 23)
        {
            e++;
        }
        if (arr[i] == 42)
        {
            f++;
        }

    }
            cout<<a<<endl;
            cout<<b<<endl;
            cout<<c<<endl;
            cout<<d<<endl;
            cout<<e<<endl;
            cout<<f<<endl;
}