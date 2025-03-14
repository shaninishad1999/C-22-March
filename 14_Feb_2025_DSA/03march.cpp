// #include<iostream>
// using namespace std;
// #include<vector>
// int main()
// {
    
//     // vector<int>v{3,5,8,4,6,7};
//     // for(auto p:v){
//     //     cout<<p<<"\n";
//     // }

//     // pair is predefined stucture templete it only store two values and the
//     //  first value is acces by first keyword and second value is acces by second keyword.
//     // We can use make_pair() to insert the record in a pair 


//    pair<int, string>p {101,"joy"};
//    p=make_pair(102,"honey");
//    cout<<p.first<<":"<<p.second;

//    vector<pair<int,string>>v;
//    int rollno,n;
//    string name;
//    cout<<"\nHow many recods u wannn store?\n";
//    cin>>n;
//    for (int i = 0; i < n; i++)
//    {
//     cout<<"Enter Rollno\n";
//     cin>>rollno;
//     cout<<"Enter name \n";
//     cin>>name;
//     v.push_back(make_pair(rollno,name));

//    }
//    cout<<"\n stored data are\n";
//    for (int i = 0; i < v.size(); i++)
//    {
//     cout<<v[i].first<<":"<<v[i].second<<"\n";
    
//    }
   
   



// } 

#include <iostream>
#include <vector>
#include <tuple>
using namespace std;

int main() {
    tuple<int, string> t {101, "joy"};
    t = make_tuple(102, "honey");
    cout << get<0>(t) << ":" << get<1>(t) << endl;

    vector<tuple<int, string>> v;
    int rollno, n;
    string name;

    cout << "\nHow many records do you want to store?\n";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter Rollno: ";
        cin >> rollno;
        cout << "Enter name: ";
        cin >> name;
        v.push_back(make_tuple(rollno, name));
    }

    cout << "\nStored data:\n";
    for (int i = 0; i < v.size(); i++) {
        cout << get<0>(v[i]) << ":" << get<1>(v[i]) << "\n";
    }

    return 0;
}
