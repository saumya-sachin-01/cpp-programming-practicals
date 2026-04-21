#include <iostream>
using namespace std;
class Patient
{
public:
    int patientID;
    string name;
    void inputPatient()
    {
        cout << "Enter Patient ID : ";
        cin >> patientID;
        cout << "Enter Name : ";
        cin >> name;
    }
    void displayPatient()
    {
        cout << "Patient ID : " << patientID << endl;
        cout << "Name : " << name << endl;
    }
};
class CriticalPatient : public Patient
{
public:
    int oxygenLevel;
    void inputCritical()
    {
        inputPatient();
        cout << "Enter oxygen level : ";
        cin >> oxygenLevel;
    }
    void checkEmergency()
    {
        if (oxygenLevel < 90)
        {
            cout << "Emergency\n";
        }
        else
        {
            cout << "Normal\n";
        }
    }
    void display()
    {
        displayPatient();
        cout << "Health Status : ";
        checkEmergency();
    }
};
class RegularPatient : public Patient
{
public:
    int heartRate;
    void inputRegular()
    {
        inputPatient();
        cout << "Enter hear rate : ";
        cin >> heartRate;
    }
    void checkHealth()
    {
        if (heartRate < 60 || heartRate > 100)
        {
            cout << "Abnormal\n";
        }
        cout << "Normal\n";
    }
    void display()
    {
        displayPatient();
        cout << "Health Status : ";
        checkHealth();
    }
};
class RemotePatient : public Patient
{
public:
    int stepCount;
    void inputRemote()
    {
        inputPatient();
        cout << "Step Count : ";
        cin >> stepCount;
    }
    void analyzeActivity()
    {
        if (stepCount < 3000)
        {
            cout << "Low activity\n";
        }
        else if (stepCount > 3000 && stepCount < 10000)
        {
            cout << "Moderate\n";
        }
        else
        {
            cout << "Active\n";
        }
    }
    void display()
    {
        displayPatient();
        cout << "Health Status : ";
        analyzeActivity();
    }
};
int main()
{
    cout << "1. Critical Patient\n";
    cout << "2. Regular Patient\n";
    cout << "3. Remote Patient\n";
    int choice;
    cout << "Enter Choice : ";
    cin >> choice;
    switch (choice)
    {
    case 1:
    {
        CriticalPatient cp;
        cp.inputCritical();
        cp.display();
        break;
    }
    case 2:
    {
        RegularPatient rp;
        rp.inputRegular();
        rp.display();
        break;
    }
    case 3:
    {
        RemotePatient r_p;
        r_p.inputRemote();
        r_p.display();
        break;
    }
    }

    return 0;
}