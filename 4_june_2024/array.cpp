// #include <iostream>
// using namespace std;
// int main()
// {

//     int n;
//     cout << "Enter array size: ";
//     cin >> n;

//     int a[n];

//     cout << "Enter array elements: \n";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     int sum = 0;
//     cout << "Printed Array: \n";
//     for (int i= n-1; i >= 0; i--)
//     {
//         cout << a[i] << "\t";
//         // sum += a[i];
//     }
//     // cout << "\n Sum = " << sum;
//     return 0;
// }

// 1   program

// #include <iostream>
// using namespace std;
// int main()
// {

//     int n;
//     cout << "Enter array size: ";
//     cin >> n;

//     int a[n];

//     cout << "Enter array elements: \n";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     int sum = 0;
//     cout << "Printed Array: \n";
//     for (int i= 0; i <n; i++)
//     {
//         cout << a[i] << "\t";
//          sum += a[i];
//     }
//      cout << "\n Sum = " << sum;
//     return 0;
// }

// 3   program
// wap to find second largest number

#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "Enter array size: ";
    cin >> n;

    int a[n];
    int i, j;
    int mx1 = a[0];
    int mx2 = mx1;
    cout << "Enter array elements: \n";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Printed Array: \n";
    for (j = 1; j < n; j++)
    {
        if (mx1 >mx2 )

        {
            mx2 = mx1;
            mx1 = a[i];
        }
       else if (mx2<mx1 && mx1>a[i])
        {
            mx2=a[i];
        }
        
    }
    cout<<"First Largest : "<<mx1<<endl;
    cout<<"Second Largest : "<<mx2<<endl;

    return 0;
}
 
//  error

// largest number   program

// #include <iostream>
// using namespace std;
// // #include<climit>
// int main()
// {

//     int a[]={-201,-405,-41,-65,-96};
//     int s=sizeof(a)/sizeof(a[0]);
//     int mx1=a[0];
//     int mx2=mx1;
//     for (int i = 1; i <s; i++)
//     {

//     if (mx1 < a[i])

//         {
//             mx2 = mx1;
//             mx1 = a[i];
//         }
//         if (mx2<a[i] && mx1>a[i])
//         {
//             mx2=a[i];
//         }
//     }
//     cout<<"First Largest : "<<mx1<<endl;
//     cout<<"Second Largest : "<<mx2<<endl;
//     return 0;
// }