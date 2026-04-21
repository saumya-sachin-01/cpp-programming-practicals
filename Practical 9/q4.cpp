#include <iostream>
using namespace std;
class Sensor
{
public:
    int sensorID;
    string location;
    void inputSensor()
    {
        cout << "Enter Sensor ID : ";
        cin >> sensorID;
        cout << "Enter Location : ";
        cin >> location;
    }
    void display()
    {
        cout << "Sensor ID : " << sensorID << endl;
        cout << "Location : " << location << endl;
    }
};
class WeatherSensor : public Sensor
{
public:
    float rainfall, humidity;
    void inputWeatherSensor()
    {
        do
        {
            cout << "Enter Rainfall range (0 - 500 mm) : ";
            cin >> rainfall;
            if (rainfall < 0 || rainfall > 500)
            {
                cout << "Invalid Input\n";
            }
        } while (rainfall < 0 || rainfall > 500);
        do
        {
            cout << "Enter Humidity range (0 - 100 %) : ";
            cin >> humidity;
            if (humidity < 0 || humidity > 100)
            {
                cout << "Invalid Input\n";
            }
        } while (humidity < 0 || humidity > 500);
    }
    void displayWeatherSensor()
    {
        cout << "Rainfall (0 - 500 mm) : " << rainfall << endl;
        cout << "Humidity (0 - 100 %) : " << humidity << endl;
    }
};
class FloodSensor : public WeatherSensor
{
public:
    void floodrisk()
    {
        if (rainfall > 100 || humidity > 80)
        {
            cout << "Medium !\n";
        }
        else if (rainfall > 100 && humidity > 80)
        {
            cout << "High !\n";
            cout << "Immediate evacuation required !";
        }

        else
        {
            cout << "Normal Condition !\n";
        }
    }
    void displayfloodrisk()
    {
        display();
        displayWeatherSensor();
        cout << "Flood Alert Level : ";
        floodrisk();
    }
};
int main()
{
    FloodSensor fs;
    fs.inputSensor();
    fs.inputWeatherSensor();
    fs.displayfloodrisk();
    return 0;
}
