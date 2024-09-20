/* 2. Write a C++ program to create a class called Rectangle that has private member variables for length and width. 
Implement member functions to calculate the rectangle's area and perimeter. */
#include<iostream>
using namespace std;
class Rectangle{
    private:
    double length;
    double width;

    public:
    Rectangle(double length,double width){
        this->length=length;
        this->width=width;
    }

    double area(){
        double area=length*width;
        return area;
    }
    double perimeter(){
        double perimerter=2*(length+width);
        return perimerter;
    }
};

int main(){
    int length,width;
    cout<<"Enter Length = ";
    cin>>length;
    cout<<"Enter Width = ";
    cin>>width;

    Rectangle obj(length,width);
    cout<<"Area = "<<obj.area()<<endl;
    cout<<"Perimeter = "<<obj.perimeter()<<endl;
    


} 