#include <iostream>
#include <string>
using namespace std;
class Student
{
    string name;
    float CGPA;

public:
    void setnameandcgpa()
    {
        cout << "Enter student's Name : ";
        getline(cin, name);

        cout << "Enter student's CGPA : ";
        cin >> CGPA;
        cin.ignore();
    }
    string getname()
    {
        return name;
    }
    float getcgpa()
    {
        return CGPA;
    }
    void display()
    {
        cout << "Name : " << name << endl;
        cout << "CGPA : " << CGPA << endl;
        cout << string(50, '-') << endl;
    }
};
int main()
{
    Student s[10];
    for (int i = 0; i < 10; i++)
    {
        cout << "Student " << i + 1 << endl;
        s[i].setnameandcgpa();
    }
    cout << "List of eligible students (CGPA>=8.0) : " << endl;
    cout << string(50, '-') << endl;

    for (int i = 0; i < 10; i++)
    {
        if (s[i].getcgpa() >= 8.0)
        {
            s[i].display();
        }
    }
    float highestcgpa = s[0].getcgpa();
    for (int i = 1; i < 10; i++)
    {
        if (s[i].getcgpa() > highestcgpa)
        {
            highestcgpa = s[i].getcgpa();
        }
    }

    cout << "Highest CGPA student details : " << endl;
    for (int i = 0; i < 10; i++)
        if (s[i].getcgpa() == highestcgpa)
        {
            cout << string(50, '-') << endl;
            s[i].display();
        }

    int totaleligiblestudents = 0;
    for (int i = 0; i < 10; i++)
    {
        if (s[i].getcgpa() >= 8.0)
        {
            totaleligiblestudents += 1;
        }
    }
    cout << "Total eligible students : " << totaleligiblestudents << endl;
    return 0;
}