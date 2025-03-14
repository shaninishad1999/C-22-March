#include <iostream>
using namespace std;
#include <vector>
#include<iterator>
int main()
{

    // vector<int>v(5,10);
    // v[0]=90;
    // v[2]=89;
    // v[4]=100;
    // // v[7]=100;

    // cout<<"Size = "<<v.size()<<endl;
    // for(auto p:v){
    //     cout<<p<<"\t";
    // }

    // vector me data dynamic enter krna
    vector<int> v;
    int n, b;
    cout << "Enter how many elements ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter value = " << i << endl;
        cin >> b;
        v.push_back(b);
    }
    // cout<<"After deletion"<<endl;
    // v.pop_back();

    for (auto p : v)
    {
        cout << p << "\t";
    }
    // vector<int>::iterator it=v.begin();
    vector<int>::iterator it=v.end();
    v.insert(it-2,300);
    cout<<"\nAfter adding given positons\n";
    for (auto p : v)
    {
        cout << p << "\t";
    }


    // iterator work as pointer


} // namespace std;
