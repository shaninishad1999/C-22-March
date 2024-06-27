#include<iostream>
using namespace std;
void display(int k[5]){
 cout<<"\nafter 10 increment\n";
for (int i = 0; i <5 ; i++)
    {
       k[i]=k[i]+10;
    }
}
int main(){
    int a[]={20,6,18,39,8};
    
    display(a);
    for (int i = 0; i <5 ; i++)
    {
        cout<<a[i]<<"\t";
    }
    
} // namespace std;int main()
