// Program
#include <iostream>
using namespace std;
// namespace std;
int main()
{

    // int a = 1;
    // do
    // {

    //     if (a != 6)
    //     {
    //         if (a % 2 == 0)
    //         {
    //             cout << a << endl;
    //         }
    //     }

    //     a++;

    // } while (a <= 10);

    int a = 1;
    do
    {

        cout << a << endl;
        if (a == 6)
        {
            break;
        }
        a++;
    } while (a <= 10);
}