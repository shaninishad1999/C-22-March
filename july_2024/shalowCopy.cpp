#include<iostream>
using namespace std;
class top{
    int amount;
    int *p;
    public:top(int a,int adrs)
    {
        amount=a;
        p=&adrs;
    }

void update(){
    amount=amount+1000;
    *p=*p+1;
}
void show(){
    cout<<"Amount = "<<amount<<"\n";
    cout<<"Address= "<<*p;
}
};
int main(){
top p1(4000,1);
top p2(p1);

    cout<<"\n value of p1\n";
    p1.show();
    
    cout<<"\n value of p2\n";
    p2 .show();
    p2.show();
    p1.updated();
    cout<<"\n After updation of p1\n";
    cout<<"\n value of p1\n";
    p1.show();
    cout<<"\nvalue of p2\n";
    p2.show();
}
