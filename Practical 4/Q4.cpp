#include <iostream>
#include <string>
using namespace std;

class Login
{

private:
    string username;
    long password;

public:
    void setCredentials()
    {
        cout << "Enter Username :";
        cin >> username;

        cout << "Set Password :";
        cin >> password;
    }
    void checkLogin()
    {
        int pwd;
        string un;
        cout << "Username :";
        cin >> un;
        cout << "Password :";
        cin >> pwd;

        if (un == username && pwd == password)
        {
            cout << "Login Successfull!!" << endl;
        }
        else
        {
            cout << "Invalid Username or Password!!" << endl;
        }
        cout << string(50, '-') << endl;
    }
};

int main()
{
    Login s1;
    cout << "--Student 1 Login--" << endl;
    s1.setCredentials();
    s1.checkLogin();

    Login s2;
    cout << "--Student 2 Login--" << endl;
    s2.setCredentials();
    s2.checkLogin();

    return 0;
}