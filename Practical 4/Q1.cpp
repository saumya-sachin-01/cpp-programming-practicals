#include <iostream>
#include <string>
using namespace std;

class ATM
{
private:
    double balance = 0;

public:
    string userName;
    void username()
    {
        cout << "Username :";
        cin >> userName;
    }

    long acNo;
    void accountNumber()
    {
        cout << "A/c Number :";
        cin >> acNo;
    }

    void deposit()
    {
        double amt;
        cout << "Add :";
        cin >> amt;
        balance += amt;
        cout << "Deposited amount :" << amt << endl;
        cout << "Available balance :" << balance << endl;
    }

    void withdraw()
    {
        double amt;
        cout << "Withdraw :";
        cin >> amt;
        if (balance > amt)
        {
            balance -= amt;
            cout << "Withdrawn amount :" << amt << endl;
        }
        else
        {
            cout << "Insufficient Balance !" << endl;
        }
        cout << "Available balance :" << balance << endl;
    }

    void showBalance()
    {
        cout << string(50, '-') << endl;
        cout << "Total Available Balance :" << balance << endl;
        cout << string(50, '-') << endl;
    }

    void showDetails()
    {
        cout << "Username :" << userName << endl;
        cout << "Account No. :" << acNo << endl;
        cout << string(50, '*') << "\n";
    }
};

int main()
{
    ATM user1;
    user1.username();
    user1.accountNumber();
    user1.deposit();
    user1.withdraw();
    user1.showBalance();
    user1.showDetails();

    ATM user2;
    user2.username();
    user2.accountNumber();
    user2.deposit();
    user2.withdraw();
    user2.showBalance();
    user2.showDetails();

    return 0;
}
