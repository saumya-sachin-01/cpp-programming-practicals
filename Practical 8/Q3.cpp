// #include <iostream>
// #include <string>
// #include <ctime>

// using namespace std;
// class Subscription
// {
//     long userID;
//     float expiryDate;
//     bool isActive = 0;

// public:
//     time_t t=time(0);
//     tm *current_time = localtime(&t);
//     void activatePlan(int days)
//     {
//         cout << "Enter user ID : ";
//         cin >> userID;
//       isActive = 1;
//         t = time(0);
//     }
//     void checkvalididty()
//     {
//         if (isActive == 1 && t < t + 30 * 24 * 60 * 60)
//         {
//             cout << "Plan is active !\n";
//         }
//         else
//         {
//             cout << "Plan is not active or expired!\n";
//         }
//     }
//  void getStatus(){
//     cout<<"User ID : "<<userID<<endl;
//     cout<<"Plan activation date and time : "<<current_time->tm_mday<<"/"<<current_time->tm_mon+1<<"/"<<current_time->tm_year+1900<<" at "<<current_time->tm_hour<<":"<<current_time->tm_min<<":"<<current_time->tm_sec<<endl;
//     cout<<"Plan expiry date and time : "<<current_time->tm_mday+30<<"/"<<current_time->tm_mon+2<<"/"<<current_time->tm_year+1900<<" at "<<current_time->tm_hour<<":"<<current_time->tm_min<<":"<<current_time->tm_sec<<endl;
//  }
// };
// int main(){
//     Subscription s1;
//     int n;
//     cout<<"Enter no. of days of plan you want to choose : ";
//     cin>>n;
//     s1.activatePlan(n);
//     s1.checkvalididty();
//     s1.getStatus();
//     return 0;
// }
#include <iostream>
#include <ctime>
using namespace std;
class Subscription
{
private:
    int userID;
    time_t expiryDate;
    bool isActive = 0;
    time_t t;

public:
    void activatePlan(int days, int userID)
    {
        this->userID = userID;
        isActive = 1;
        t = time(0);
        expiryDate = t + (days * 24 * 60 * 60);
    }
    void checkValidity()
    {
        if (expiryDate > t && isActive)
        {
            cout << "Plan is valid !\n";
        }
        else
        {
            cout << "Plan validity ended !\n";
            isActive = 0;
        }
    }
    void getStatus()
    {
        cout << "User ID : " << userID <<"\n";
        if (isActive)
        {
            cout << "Plan is Active!\n";
            cout << "Plan Starting From : " << ctime(&t);
            cout << "Plan Expiry : " << ctime(&expiryDate);
        }
        else
        {
            cout << "Plan is not active !\n";
        }
    }
};
int main()
{
    int u;

    Subscription s1;
    cout << "Enter User ID : ";
    cin >> u;
    int n;
    cout << "Enter no. of days of plan you want to choose : ";
    cin >> n;
    s1.activatePlan(u, n);
    s1.checkValidity();
    s1.getStatus();
    return 0;
}