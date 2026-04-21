#include <iostream>
using namespace std;
class SkillAnalyzer
{
public:
int programmingSkill;
int communicationSkill;
    void inputSkills()
    {
        cout << "Enter programming skills : ";
        cin >> programmingSkill;
        cout << "Enter communication skill : ";
        cin >> communicationSkill;
    }
int calculateSkillScore()
    {
        return (programmingSkill + communicationSkill);
    }
};
class ProjectEvaluator
{
public:
int projectCount;
int projectQualityScore;
    void inputProjects()
    {
        cout << "Enter Project Count : ";
        cin >> projectCount;
        cout << "Enter Project Quality Score (0-100) : ";
        cin >> projectQualityScore;
    }
};
class CandidateRanking : public SkillAnalyzer, public ProjectEvaluator
{
    public:
float finalscore;
    string rank;
    void evaluateCandidate()
    {
        finalscore = (projectQualityScore + calculateSkillScore());
    }
       
    void displayResult()
    {
        cout << "Final Score of the Student : " << finalscore<<endl;
        cout << "Rank : " ;
         if (finalscore >= 80)
        {
            rank = "Excellent";
            cout<<rank;
        }
        else if (finalscore >= 60 && finalscore <= 79)
        {
            rank = "Good";
              cout<<rank;
        }
        else
        {
            rank = "Average";
            cout<<rank;
        }
    }
    
};
int main()
{
    CandidateRanking c_r;
    c_r.inputSkills();
    c_r.inputProjects();
    c_r.evaluateCandidate();
    c_r.displayResult();
    return 0;
}
