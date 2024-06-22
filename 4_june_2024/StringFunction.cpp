#include<iostream>
using namespace std;
#include<string>
int main(){

char s[1];   
cout<<"Enter ur name \n";
// cin.get(s,10);
cin.getline(s,10);  //for space adding 
cout<<"ur name = "<<s;
}
