#include <iostream>
#include <ctime>
#include <string>
#include <iomanip>
using namespace std;

class Log
{
public:
    string IP[100];
    time_t t_s;

    void gettime()
    {
        t_s = time(0);
        cout << put_time(localtime(&t_s), "%H:%M:%S");
    }

    int n;

    void askIP()
    {
        cout << "Enter no. of log entries : ";
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cout << "Enter IP Address " << i + 1 << " :";

            cin >> IP[i];
            cout << "Timestamp : ";
            gettime();
            cout << "\n";
        }
    }
};
class NetworkLog : public Log
{
public:
    int loginattempts[100];
    void repeatedAcces()
    {
        string check[100];
        for (int i = 0; i < n; i++)
        {
            loginattempts[i] = 0;
            check[i] = IP[i];
            for (int j = 0; j < n; j++)
            {
                if (check[i] == IP[j])
                {
                    loginattempts[i] += 1;
                }
            }
        }
    }
};
class ThreatAnalyzer : public NetworkLog
{
public:
    bool block;
    void detect()
    {
    }
    void display()
    {
        for (int i = 0; i < n; i++)
        {
            cout << string(50, '-') << endl;
            cout << "IP Address : " << IP[i] << endl;
            cout << "Login Attempts : " << loginattempts[i] << endl;
            cout << "Threat Level : ";
            if (loginattempts[i] < 5)
            {
                cout << "Low Threat\n";
            }

            if (loginattempts[i] >= 5 && loginattempts[i] <= 10)
            {
                cout << "Suspicious\n";
                cout << "Medium Threat\n";
            }
            if (loginattempts[i] >= 10)
            {
                cout << "High Threat\n";
                cout << "IP is blocked\n";
                block = 1;
            }

            cout << "Block Status : ";
            if (block)
            {
                cout << "Blocked" << endl;
            }
            else
            {
                cout << "Not blocked" << endl;
            }
        }
    }
};
int main()
{
    ThreatAnalyzer T;
    T.askIP();
    T.repeatedAcces();
    T.display();
    return 0;
}

// #include <iostream>
// #include <ctime>
// #include <string>
// #include <iomanip>
// using namespace std;

// // Base Class
// class Log
// {
// public:
//     int n;
//     string IP[100];   // array of IPs
//     time_t t_s;

//     void gettime()
//     {
//         t_s = time(0);
//         cout << put_time(localtime(&t_s), "%H:%M:%S");
//     }

//     void askIP()
//     {
//         cout << "Enter no. of log entries: ";
//         cin >> n;

//         for (int i = 0; i < n; i++)
//         {
//             cout << "Enter IP Address " << i + 1 << ": ";
//             cin >> IP[i];

//             cout << "Timestamp: ";
//             gettime();
//             cout << endl;
//         }
//     }
// };

// // Derived Class
// class NetworkLog : public Log
// {
// public:
//     int attempts[100] = {0};  // store attempts per IP

//     void repeatedAccess()
//     {
//         for (int i = 0; i < n; i++)
//         {
//             int count = 0;

//             for (int j = 0; j < n; j++)
//             {
//                 if (IP[i] == IP[j])
//                 {
//                     count++;
//                 }
//             }

//             attempts[i] = count;
//         }
//     }
// };

// // Derived Class
// class ThreatAnalyzer : public NetworkLog
// {
// public:
//     void analyze()
//     {
//         for (int i = 0; i < n; i++)
//         {
//             cout << "\nIP Address: " << IP[i] << endl;
//             cout << "Login Attempts: " << attempts[i] << endl;

//             if (attempts[i] >= 10)
//             {
//                 cout << "Threat Level: High\n";
//                 cout << "Status: BLOCKED\n";
//             }
//             else if (attempts[i] >= 5)
//             {
//                 cout << "Threat Level: Medium (Suspicious)\n";
//                 cout << "Status: Monitoring\n";
//             }
//             else
//             {
//                 cout << "Threat Level: Low\n";
//                 cout << "Status: Safe\n";
//             }
//         }
//     }
// };

// // Main Function
// int main()
// {
//     ThreatAnalyzer T;

//     T.askIP();
//     T.repeatedAccess();
//     T.analyze();

//     return 0;
// }