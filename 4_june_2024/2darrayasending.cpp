#include<iostream>
using namespace std;
int main(){

    int a[]={2,4,3,5,1,6};
    int n=sizeof(a)/sizeof(a[0]);
    int temp;
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<"\t";
    }
    cout<<"\nsorted data\n";
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (a[j]>a[j+1])
            {
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
            
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<"\t";
    }
} 
    
    


// #include<iostream>
// using namespace std;
// int main(){

//     int a[]={2,4,3,5,1,6};
//     int n=sizeof(a)/sizeof(a[0]);
//     int temp;
//     for (int i = 0; i < n; i++)
//     {
//         cout<<a[i]<<"\t";
//     }
//     cout<<"\nsorted data\n";

//     for (int i = n-1; i >=0; i--)
//     {
//         cout<<a[i]<<"\t";
//     }
    
    
    
// }


// #include<iostream>
// using namespace std;
// int main(){

//     int a[]={1,6,0,2,3,0}; //
//     int n=sizeof(a)/sizeof(a[0]);
//     int temp;
//     for (int i = 0; i < n; i++)
//     {
//         cout<<a[i]<<"\t";
//     }
//     cout<<"\nsorted data\n";

//     for (int i = n-1; i >=0; i--)
//     {
//         cout<<a[i]<<"\t";
//     }
// }
    
    
// }