//shalow copy by default bana hota hai
// c++ contains the shalow copy inside a class 
//
#include<iostream>
using namespace std;
class top{
    int x,y;
    public:top(int a,int b)
    {
        x=a;
        y=b;
    }
void show()
{
  cout<<"x= "<<x<<endl;
  cout<<"y= "<<y<<endl;

}
};
int main(){
  top p1(40,50);  
  //top p2=p1; //implicit assignment copy constructor
  top p2 (p1);//call shallow copy constructor
  p2.show();
} 




// deep copy


