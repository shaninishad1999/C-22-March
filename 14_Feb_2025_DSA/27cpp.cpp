// #include<iostream>
// using namespace std;
// #include<array>
// // i  want second hightest value in array in case of dublicascy
// // 1 dublicate value bataye
// // 2 array empty ho empty bataye
// // 3 array contain only one data then message show there is only one data show we can not compare and find value
// // 
// int main(){

//     array<int,5>arr1{4,8,9,7,9};
//     array<int,5>arr2{7,3,1,5,7};
//     arr1.swap(arr2);  
//     //  array ke ander swap function hota hai

//     for(auto p1:arr1){
//         cout<<p1<<"\t";
//     }
//     cout<<"\n";
//     for(auto p2:arr2){
//         cout<<p2<<"\t";
//     }


    
// } // namespace std;






// start with Vector in c++

// vector is dynamic and array is static
// vector me last se insertion and deletion hota hai

#include<iostream>
using namespace std;

#include<vector>

int main(){

    vector<int>v;

    cout<<v.size()<<endl;

    vector<int>v2{4,8,5,6,7,7};
    cout<<"Size = "<<v2.size()<<endl;
    cout<<"Capacity = "<<v2.capacity()<<endl;
    v2[2]=100;
    v2.pop_back();
    for(auto p:v2){
        cout<<p<<"\t";
    }
    v2.push_back(430);
    cout<<"\nCapacity = "<<v2.capacity()<<endl;
    cout<<"Size = "<<v2.size()<<endl;
}








