#include<iostream>
using namespace std;
#include<math.h>
int main(){

 int a,b;
 cout<<"Enter 2 number :\n";
 cin>>a>>b;
 swap(a,b);


 cout<<"a= "<<a<<"\n";   
 cout<<"a= "<<b<<"\n";   
 cout<<"small= "<< min(a,b)<<"\n";   
 cout<<"big= "<< max(a,b)<<"\n";   

 cout<<"power = "<< pow(a,b)<<"\n";   
 cout<<"sqrt = "<< sqrt(49)<<"\n";   



}