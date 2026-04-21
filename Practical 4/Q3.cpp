#include <iostream>
#include <string>
using namespace std;

class Mobile
{

private:
    long pin;

public:
    void setPin()
    {
        long PIN;
         pin = PIN;
        cout << "Set PIN :";
        cin >> pin;
        cout << "Confirm PIN :";
        cin >> pin;
        //  if (pin == PIN)
        // {
        //     cout << "Unlocked!" << endl;
        // }
        // else
        // {
        //     cout << "Wrong PIN!" << endl;
       
    }
    void unlock()
    {
        long PIN;
        cout << "Enter PIN :";
        cin >> PIN;
        if (pin == PIN)
        {
            cout << "Unlocked!" << endl;
        }
        else
        {
            cout << "Wrong PIN!" << endl;
        }
        cout << string(50, '*') << endl;
    }
};

int main()
{
    Mobile user1;
    cout << "-----User 1's Mobile-----" << endl;
    user1.setPin();
    user1.unlock();

    Mobile user2;
    cout << "-----User 2's Mobile-----" << endl;
    user2.setPin();
    user2.unlock();

    return 0;
}