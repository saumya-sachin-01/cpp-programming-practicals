#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Cart
{
private:
    float itemPrice;
    int qty;

public:
    void itemDetails()
    {
        float price;
        int iqty;
        itemPrice = price;
        qty = iqty;

        cout << "Item Price :";
        cin >> price;
        cout << "Quantity :";
        cin >> iqty;
    }
    Cart(){
        itemPrice=0;
        qty=0;
    }
    float total;
    void Total()
    {

        total = itemPrice * qty;
        cout << "Total :" << total << endl;
    }
    void bill()
    {
        cout << "Item Price :" << setw(15) << "Quantity :" << setw(15) << "Total :" << endl;
        cout << string(50, '-') << endl;
        cout << itemPrice << setw(17) << qty << setw(19) << total << endl;
        cout << string(50, '*') << endl;
    }
};
int main()
{
    Cart user1;
    cout << "-----User 1's Cart Details-----" << endl;
    user1.itemDetails();
    user1.Total();
    user1.bill();

    Cart user2;
    cout << "-----User2's Cart Details-----" << endl;
    user2.itemDetails();
    user2.Total();
    user2.bill();

    return 0;
}
