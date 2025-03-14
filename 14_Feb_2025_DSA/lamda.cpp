#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>
int main(){
    vector<int>v={4,1,3,2,7};
    // sort(v.begin(),v.end(),[](int a,int b){return a>b;});
    sort(v.begin(),v.end(), less<int>());
    sort(v.begin(),v.end(), greater<int>());


    for(auto p:v){
        cout<<p<<"\t";
    }
    cout<<"\n Lamda Function = "<<[] (int a) {return a+10;}(5);
    cout<<"\n Lamda Function 2  = "<<[] (int a,int b) {return a>b;}(2,3);

    auto k=[] (int a) {return a*a;};
    cout<<"\n Function Pointer = "<<k(7);
} 
