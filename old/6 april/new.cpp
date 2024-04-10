#include <iostream>
using namespace std;

int main(){
    string city;
    cout<<"Please select any one of the : \n";
    cout<<"Bhopal\ndelhi\nagra\njaipur\n";
    cout<<"Enter city : ";
    cin>>city;
    if (city=="bhopal")
    {
        cout<<"tahul masjid";
    }
    else if (city=="delhi")
    {
            cout<<"Red fort";

    }
    else if (city=="agra")
    {
            cout<<"Taj mahal";

    }
    else if (city=="jaipur")
    {
            cout<<"hava mahal";

    }
    else{
        cout<<"Invalid choice";
    }
   
    
}