// #include<iostream>
// using namespace std;
// class cybrom{
//     public:static int a,b,c;
//     public:static void sum(int x,int y){
//         c=x+y;
//         cout<<c;
//     }
// };
// int cybrom::c=0; //static variable must be outside the class inisilize
// int main(){
//     int x,y;
//     cout<<"Enter two Number\n";
//     cin>>x>>y;
//     cybrom ::sum(x,y);
// }



#include<iostream>
using namespace std;
class cybrom

{
    public:void show()
    {
        cout<<"Cybrom class \n";

    }
};
class bhopal{
    public:void display(){
    cybrom c;
        c.show();
    cout<<"Bhopal class\n";
    }

};
int main(){
   bhopal b;
   b.display();
}

