

// #include <iostream>
// using namespace std;
// int main(){

//     int a,b,c;
//     a=4;
//     a++;
//     b=8;
//     c=++a +b;
//     cout<<c;
// }

// #include <iostream>
// using namespace std;

// int main(){
//     int x=5, y=5;
//     // cout<<x <<"\n";
//     // cout<<y;

//     cout<<++x <<"\n"<<--y<<endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int number1=5;
//     int number2=5;
//     int number3=5;
//     number1=number2++;
//     number2=--number2;
//     cout<<"number1 = "<<number1<<"\n" <<"\nnumber2 = "<<number2<<"\n"<<"number3 = "<< ++number3;

//     return 0;
// }


// #include <iostream>
// using namespace std;
// int main(){
//     int x=5,y=5,z;   //z is takeing zunk value
//     x=++x; y=--y;
//     cout<<" x = "<<x <<"\n";
//     cout<<" y = "<<y <<"\n";
//     cout<<" z = "<<z <<"\n";
//     return 0;
// }


// Q 4 confusion

#include <iostream>
using namespace std;

int main(){
    int x=5,y=5,z;
    x=++x; y=--y;
    ++y;
    // z=x;
    
    z=x + ++x;
    cout<<"x = "<<x <<"\n";
    cout<<"y = "<<y <<"\n";
    cout<<"z = "<<z <<"\n";
    // return 0; 
}


// #include <iostream>
// using namespace std;

// int main(){
//     int s=53;
//     int w=-3;  //4
//     int z=22;  //1
//     cout<<"s = " << ++s<<endl;
//     w=++s;
//     cout<<"w = " << w <<endl;
//     z=s--;
//     cout<<"z = "<< z<<endl;
//     s=++s;
    

//     return 0;
// }




