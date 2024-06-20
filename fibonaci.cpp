// #include <iostream> 
// using namespace std;
// int main() { 
//     int n, first = 0, second = 1, next; 
//     cout << "Enter the number of terms: "; 
//     cin >> n; 
//     cout << "Fibonacci sequence: " << first << " " << second << " "; 
//     for (int i = 2; i < n; i++) { 
//         next = first + second;  
//         first = second; 
//         second = next; 
//         cout << next << " "; 
//     } 
//     return 0; 
// }

#include<iostream>
using namespace std;
int main()
{
    int n,a=-1,b=1,c,i;
    cout<<"\nEnter the number :";
    cin>>n;
    for(i=0;i<n;i++)
    {
        c=a+b;//1+1
        cout<<"\n"<<c;//1
        a=b;//1 0 1 1
        b=c;//0 1 1 2
    }
    return 0;
}