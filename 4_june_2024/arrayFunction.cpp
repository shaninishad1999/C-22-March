#include<iostream>
using namespace std;
int arrUser(int n)
{
    int arr[n];
    int mx=arr[0];
    for (int i = 0; i <n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i <n; i++)
    {
        if (arr[i]>mx)
        {
            mx=arr[i];
        }
        
    }
    cout<<"mx = "<<mx;
    // return mx;
    
}


int main(){
  int n;
   
  cout<<"Enter array size ";
  cin>>n;
  arrUser(mx);
   




} // namespace std;int mainI()
