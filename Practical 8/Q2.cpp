#include <iostream>
#include <string>
using namespace std;
class Examsession
{
    long studentID;
    float score;
    bool isSubmitted = 0;

public:
    void startExam()
    {
        cout << "Enter student ID : " << endl;
        cin >> studentID;
    }
    void submitExam(int marks)
    {
        if (marks < 100 && isSubmitted == 0)
        {
            score = marks;
            isSubmitted = 1;
        }
    }
    void getresult()
    {
        if (isSubmitted == 1)
        {
            cout << "Student ID : " << studentID << "\n";
            cout << "Score : " << score << "\n";
        }
    }
};
int main()
{
    Examsession e1;
    e1.startExam();
    e1.submitExam(70);
    e1.submitExam(80);
    e1.getresult();
    return 0;
}