// 17. Write a  program to calculate profit or loss.

#include <iostream>
using namespace std;
int main()
{
    float Selling_Price, Original_Cost, Profit_Or_Loss, q; // q is product quantity
    cout << "Enter Per Peace Original Price : " << endl;   // message for display
    cin >> Original_Cost;                                  // taking input from user
    cout << "Enter Per Peace Selling Price : " << endl;    // message for display
    cin >> Selling_Price;
    cout << "Enter Product Quantity : " << endl; // message for display
    cin >> q;

    float t_sel = q * Selling_Price;
    float t_Original_Cost = q * Original_Cost;

    // Profit and loss calculation
    Profit_Or_Loss = t_sel - t_Original_Cost;

    if (Profit_Or_Loss > 0)
    {
        cout << "Your Profit Here :" << Profit_Or_Loss;
    }
    else if (Profit_Or_Loss < 0)
    {
        cout << "Your Lose Here :" << Profit_Or_Loss;
    }
    else
    {
        cout << "Your Profit or Lose Zero ";
    }
}
