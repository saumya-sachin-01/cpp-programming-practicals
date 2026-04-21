#include <iostream>
#include <string>
using namespace std;
class Employee
{
    long em_id;
    string name;
    int p_score;

public:
    void setdetails()
    {
        cout << "Enter employee ID : ";
        cin >> em_id;
        cout << "Enter employee name : ";
        cin.ignore();
        getline(cin, name);

        cout << "Enter performance score(0-100) : ";
        cin >> p_score;
    }
    int returnperformancescore()
    {
        return p_score;
    }
    string returnemployeename()
    {
        return name;
    }
    void display()
    {
        cout << "Employee ID : " << em_id << endl;
        cout << "Employee Name : " << name << endl;
        cout << "Performance Score(0-100) : " << p_score << endl;
        cout << string(50, '-') << endl;
    }
};
int main()
{
    int n;
    cout << "Enter no. of employees : ";
    cin >> n;
    Employee e[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Employee " << i + 1 << endl;
        e[i].setdetails();
    }
    int bestperformancescore = e[0].returnperformancescore();
    for (int i = 1; i < n; i++)
    {
        if (e[i].returnperformancescore() > bestperformancescore)
        {
            bestperformancescore = e[i].returnperformancescore();
        }
    }

    cout << "Best Performing Employee Details : " << endl;
    cout << string(50, '-') << endl;
    for (int i = 0; i < n; i++)
    {
        if (e[i].returnperformancescore() == bestperformancescore)
        {
            e[i].display();
        }
    }
    cout << "Employee Details(Performance Score < 50) : " << endl;
    cout << string(50, '-') << endl;
    for (int i = 0; i < n; i++)
    {
        if (e[i].returnperformancescore() != bestperformancescore)
        {
            e[i].display();
        }
    }
    float total = 0;
    for (int i = 0; i < n; i++)
    {
        total += e[i].returnperformancescore();
    }
    cout << "Average Company Performance Score : " << total / n << endl;
    return 0;
}