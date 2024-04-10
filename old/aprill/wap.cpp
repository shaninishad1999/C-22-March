// wap to determine whether a number given number is positive number or negative or 0

#include <iostream>
using namespace std;

int main(){

//     int number;
//     cout<<"Enter  Your Number : ";
//     cin>>number;
//     if(number>0){
//         cout<<"Enter Number is Positive : "<<number;
//     }
//     else if (number<0)
//     {
//         cout<<"Enter Number is Negative : "<<number;
//     }
//    else{
//     cout<<"Enter Number is : "<<number;
//    }


// 193


double cp,dis;
cout<<"Enter price cost : ";
cin>>cp;

if (cp>0 && cp<=2000)
{
    dis=cp*(5.0/100);
    cout<<"discount 5%: "<<dis<<endl;
    cout<<"You have to pay : "<<cp-dis;
}
else if (cp>2001 && cp<=5000)
{
    dis=cp*(25.0/100);
    cout<<"discount 25% : "<<dis<<endl;
    cout<<"You have to pay : "<<cp-dis;
}
else if (cp>5001 && cp<=10000)
{
    dis=cp*(35.0/100);
    cout<<"discount 35% : "<<dis<<endl;
    cout<<"You have to pay : "<<cp-dis;
}
else{
     dis=cp*(50.0/100);
    cout<<"discount 50% : "<<dis<<endl;
    cout<<"You have to pay : "<<cp-dis;
}

    
}