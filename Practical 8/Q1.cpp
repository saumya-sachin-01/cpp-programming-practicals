#include <iostream>
#include <string>
using namespace std;
class Rocket
{
    int rocketID;
    int fuelLevel;
    string launchCode;
    bool isLaunched = false;

public:
    Rocket(int rocketID, int fuelLevel, string launchCode)
    {
        this->rocketID = rocketID;
        this->fuelLevel = fuelLevel;
        this->launchCode = launchCode;
    }

    void refuel(int amount)
    {

        if ((fuelLevel + amount) > 100)
        {
            cout << "Fuel level exceeds fuel level limit !!\n";
            cout << "Your Fuel Level Limit is 100 !!\n";
            cout << "You can add " << (100 - fuelLevel) << " litres of fuel only !!\n";
        }
        else
        {

            fuelLevel = amount + fuelLevel;
        }
    }
    void setLaunchCode(string code)
    {
        launchCode = code;
        }
    void launch(string enteredCode)
    {
        if (isLaunched == false && (launchCode == enteredCode) && !(fuelLevel > 100) && fuelLevel >= 80)
        {
            isLaunched = true;
        }
    }
    void getStatus()
    {
        cout << "Rocket ID : " << rocketID << endl;
        cout << "Fuel level : " << fuelLevel << endl;
        cout << "Launch status : ";
        if (isLaunched == true)
        {
            cout << "Launched Successfully !!" << endl;
        }
        else
        {
            cout << "Lauching Failed !!" << endl;
        }
    }
};
int main()
{
    Rocket r(123, 70, " ");
    r.refuel(20);
    r.setLaunchCode("abc@123");
    r.launch("abc@123");
    r.getStatus();
    return 0;
}

