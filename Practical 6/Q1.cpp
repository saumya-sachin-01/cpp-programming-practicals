#include <iostream>
#include <string>

using namespace std;

class Attendance
{
private:
    string StudentName;
    int no_ofClass;
    int no_ofclassattended;
    float attd_percentage;

public:
    Attendance(string StudentName, int no_ofClass, int no_ofclassattended)
    {
        this->StudentName = StudentName;
        this->no_ofClass = no_ofClass;
        this->no_ofclassattended = no_ofclassattended;
    }

    void cal_attdPercentage()
    {
        attd_percentage = (no_ofclassattended / (float)no_ofClass) * 100;
    }

    float getattd_percentage()
    {
        return attd_percentage;
    }

    void displayDetails()
    {
        cout << "Student Name: " << StudentName << endl;
        cout << "Total Classes: " << no_ofClass << endl;
        cout << "No. of class attended: " << no_ofclassattended << endl;
        cout << "Attendance Percentage: " << attd_percentage << "%" << endl;
    }
};

void checkEligibility(Attendance obj)
{
    if (obj.getattd_percentage() >= 75)
    {
        cout << "Student is eligible for the exam" << endl;
        cout << string(50, '-') << endl;
    }
    else
    {
        cout << "Student is NOT eligible for exam" << endl;
        cout << string(50, '-') << endl;
    }
};

int main()
{
    Attendance s1("Ram", 50, 50);
    s1.cal_attdPercentage();
    s1.displayDetails();
    checkEligibility(s1);

    Attendance s2("Shyam", 50, 30);
    s2.cal_attdPercentage();
    s2.displayDetails();
    checkEligibility(s2);
    return 0;
}