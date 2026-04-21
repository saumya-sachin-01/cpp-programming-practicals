#include <iostream>
#include <string>

using namespace std;

class Sensor
{
protected:
    long sensorID;
    string location;

public:
    void sensorDetailsIp()
    {
        cout << "Enter sensor ID : ";
        cin >> sensorID;
        cout << "Enter location : ";
        cin.ignore();
        getline(cin, location);
    }
    void display()
    {
        cout << "Sensor Details" << endl;
        cout << "Sensor ID : " << sensorID << endl;
        cout << "Location : " << location << endl;
    }
};

class Soilsensor : public Sensor
{
private:
    int m_l;
    int f_i;

public:
    int getmaturitylevel()
    {
        return m_l;
    }
    int getfertilityindex()
    {
        return f_i;
    }
    void setSoilDetails()
    {
        cout << "Enter maturity level [Percentage of water in soil (0-100%%)]: ";
        cin >> m_l;
        cout << "Enter fertility index [Soil fertility score (0-100)]: ";
        cin >> f_i;
    }
    void soilsensorreading()
    {
        cout << "Soil Readings" << endl;
        cout << "Maturity Level :" << m_l << endl;
        cout << "Fertility Index :" << f_i << endl;
    }
    void checkSoilSuitability()
    {
        cout << "Soil Suitability Result" << endl;
        if (m_l >= 40 && m_l <= 70 && f_i >= 50)
        {
            cout << "Soil is suitable !!" << endl;
        }
        else
        {
            cout << "Soil is not suitable !!" << endl;
        }
    }
    void suggestions()
    {
        cout << "Suggestions" << endl;
        if (m_l < 40)
        {
            cout << "Irrigation is needed!!" << endl;
        }
        if (m_l > 70)
        {
            cout << "Drainage is needed!!" << endl;
        }
        if (f_i < 50)
        {
            cout << "Fertilizer is needed!!" << endl;
        }
    }

    void displayReport()
    {
        cout << string(50, '-') << endl;
        display();
        soilsensorreading();
        checkSoilSuitability();
        suggestions();
    }
};

int main()
{
    Soilsensor ss;
    ss.sensorDetailsIp();
    ss.setSoilDetails();
    ss.displayReport();
    return 0;
}