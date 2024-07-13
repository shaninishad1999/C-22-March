#include <iostream>
using namespace std;

const int m = 50;

class ITEMS
{
    int itemCode[m];
    float itemPrice[m];
    int count;

public:
    void CNT()
    {
        count = 0;
    }
    void getitem();
    void displaySum();
    void remove();
    void displayItems();
};

void ITEMS::getitem()
{
    cout << "Enter Item code: ";
    cin >> itemCode[count];
    cout << "Enter Item cost: ";
    cin >> itemPrice[count];
    count++;
}

void ITEMS::displaySum()
{
    float sum = 0;
    for (int i = 0; i < count; i++)
    {
        sum = sum + itemPrice[i];
    }
    cout << "\nTotal Value: " << sum << endl;
}

void ITEMS::remove()
{
    int a;
    cout << "Enter Item Code: ";
    cin >> a;
    for (int i = 0; i < count; i++)
    {
        if (itemCode[i] == a)
        {
            itemPrice[i] = 0;
            return; // exit loop after finding the item to remove
        }
    }
    cout << "Item not found." << endl;
}

void ITEMS::displayItems()
{
    cout << "\nCode    Price ";
    for (int i = 0; i < count; i++)
    {
        cout << "\n  " << itemCode[i];
        cout << "    " << itemPrice[i];
    }
    cout << "\n";
}

int main()
{
    ITEMS order;
    order.CNT();
    int x;
    do
    {
        cout << "\nEnter Appropriate number to execute function: \n";
        cout << "\n1: Add an item";
        cout << "\n2: Display total value";
        cout << "\n3: Delete an Item";
        cout << "\n4: Display all items";
        cout << "\n5: Quit";
        cout << "\n\nWhat is your option? ";
        cin >> x;
        switch (x)
        {
        case 1:
            order.getitem();
            break;

        case 2:
            order.displaySum();
            break;

        case 3:
            order.remove();
            break;

        case 4:
            order.displayItems();
            break;

        case 5:
            cout << "Exiting program.";
            break;

        default:
            cout << "Wrong choice";
            break;
        }
    } while (x != 5);

    return 0;
}
