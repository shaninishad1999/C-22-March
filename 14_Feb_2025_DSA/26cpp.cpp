#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

int main()
{
    array<int, 6> v{9, 5, 6, 8, 4, 2}; 
    array<double, 3> v2{23.4, 56.4, 98.2};

    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << "\t";
    }
    cout << "\n";

    for (auto p : v2)
    {
        cout << p << "\t";
    }

    cout << "\nFront  : " << v.front() << "\n";
    cout << "Back   : " << v.back() << "\n";

    sort(v.begin(), v.end());

    cout << "Data in ascending order:\n";
    for (auto k : v)
    {
        cout << k << "\t";
    }
    cout << "\n";

    // Correcting second largest value retrieval
   
        cout << "Second largest value: " << v[v.size() - 2] << "\n"; 
        cout << "Second largest value: " << v[4] << "\n"; 
    return 0;
}
