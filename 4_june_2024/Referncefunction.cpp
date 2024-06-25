#include<iostream>
using namespace std;
void swp(int &a, int &b)
{
    int t;
    t=a;
    a=b;
    b=t;
}

int main(){
int x,y;
cout<<"Enter Two number ";
cin>>x>>y;
swp(x,y);
cout<<"x= "<<x<<"\n";
cout<<"y= "<<y<<"\n";

}