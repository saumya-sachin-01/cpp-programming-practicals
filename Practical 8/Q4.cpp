#include <iostream>
using namespace std;
class Machine
{
    long machineID;
    float temperature;
    float maxtemperature;

public:
    void setmaxtemperature()
    {
        cout << "Enter maximum temperature : ";
        cin >> maxtemperature;
        do
        {
         cout << "Enter current temperature : ";
            cin >> temperature;
             if(temperature > maxtemperature)
            {
                cout << "Warning : unsafe temperature !!\n";
            }
        } while (temperature > maxtemperature);
    }
    void increasetemperature()
    {
        float incr;
        do
        {
            cout << "Enter increment in temperature : ";
            cin >> incr;
            if ((incr + temperature) < maxtemperature)
            {
                temperature = incr + temperature;
            }
            else
            {
                cout << "Warning : unsafe temperature !!\n";
            }
        } while ((incr + temperature) > maxtemperature);
    }
    void decreasetemperature()
    {
        float decr;
        do
        {
            cout << "Enter decrement in temperature : ";
            cin >> decr;
            if ((temperature - decr) > 0)
            {
                temperature = temperature - decr;
            }
            else
            {
                cout << "Warning : unsafe temperature !!\n";
            }
        } while ((temperature - decr) < 0);
    }
    void gettemperature()
    {
        {
            cout << "Current temperature : " << temperature << "\n";
        }
    }
};
int main()
{
    Machine m1;
    m1.setmaxtemperature();
    m1.increasetemperature();
    m1.decreasetemperature();
    m1.gettemperature();
    return 0;
}