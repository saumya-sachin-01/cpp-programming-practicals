#include <iostream>
#include <string>
using namespace std;
class Customer
{
    string Name;
    long acno;
    double amt[5];

public:
    void setdetails()
    {
        cout << "Enter Customer Name : " << endl;
        cin.ignore();
        getline(cin, Name);
        cout << "Enter Customer A/C No. : " << endl;
        cin >> acno;
        cout << "Enter Customer Last 5 Transactions : " << endl;
        for (int i = 0; i < 5; i++)
        {
            cin >> amt[i];
        }
    } 
    

    void totaltransaction()
    {
        float total = 0;
        for (int i = 0; i < 5; i++)
        {
            total += amt[i];
        }
        cout << "Total Transaction : " << total << endl;
    }

    void highestamt()
    {
        float highesttransaction = amt[0];
        for (int i = 0; i < 5; i++)
        {
            if (highesttransaction < amt[i])
            {
                highesttransaction = amt[i];
            }
        }
        cout << "Highest Transaction : " << highesttransaction << endl;
    
    }
    void suspicioustransaction()
    {
        for (int i = 0; i < 5; i++)
        {
            if (amt[i] > 50000)
            {
                cout << amt[i] << " is Suspicious Transaction !!" << endl;
            }
        }
        cout << string(50, '-') << endl;
        ;
    }
 
};
int main()
{
    Customer c[2];
    for (int i = 0; i < 2; i++)
    {
        c[i].setdetails();
        c[i].totaltransaction();
        c[i].highestamt();
        c[i].suspicioustransaction();
    }
    return 0;
}