#include<iostream>
using namespace std;
    bool verify(int attempt)
    {
        if (attempt==0)
        {
            cout<<"Block";
            return true;
        }
        int password=2025;
        int get;
        cout<<"Enter password";
        cin>>get;
        if (password==get)
        {
            cout<<"Welcome ";
            return true;
        }
        else{
            cout<<"try again";
            return verify(attempt-1);
        }
        
        
    }
   
int main(){
    verify(3);
    return 0;

    }
    
} 