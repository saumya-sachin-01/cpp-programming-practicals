#include <iostream>
#include <string>
using namespace std;
class Player
{
    string PName;
    int score[5];

public:
    void setdetails()
    {
        cout << "Enter Player's Name : ";

        getline(cin, PName);
        cout << "Enter 5 scores : " << endl;
        for (int i = 0; i < 5; i++)
        {
            cin >> score[i];
        }
    }
    string playername()
    {
        return PName;
    }
    float total = 0;
    void totalscore()
    {
        for (int i = 0; i < 5; i++)
        {
            total += score[i];
        }
    }
    float returntotal()
    {
        return total;
    }
    void display()
    {
        cout << "Player's Name : " << PName << endl;
        cout << "Player's scores : ";
        for (int i = 0; i < 5; i++)
        {
            cout << score[i] << " ";
        }
        cout << "\n";
        cout << "Average score : " << total / 5 << endl;
    }
};
int main()
{
    int n;
    cout << "Enter no. of players : ";
    cin >> n;
    Player p[n];
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        p[i].setdetails();
        p[i].totalscore();
        p[i].display();
    }
    float highestscore = p[0].returntotal();
    string highestscorername = p[0].playername();
    for (int i = 1; i < n; i++)
    {
        if (p[i].returntotal() > highestscore)
        {
            highestscore = p[i].returntotal();
            highestscorername = p[i].playername();
        }
    }
    cout << "Highest score : " << highestscore << " and Highest scorer : " << highestscorername << endl;
    return 0;
}

// #include<iostream>
// #include<string>
// using namespace std;

// class Player{
//     public :
//     string name;
//     int scores[5];

//     Player (int p1, int p2, int p3, int p4, int p5){
//         scores[0]=p1;
//         scores[1]=p2;
//         scores[2]=p3;
//         scores[3]=p4;
//         scores[4]=p5;
//     }

//     void Display(){
//         for(int i=0; i<5; i++){
//             cout<<"Player scores :" <<scores[i]<<endl;

//             .
//         } cout<<string(30, '=')<<endl;
//     }
// };

// int main(){
//     Player P1[2]{
//         Player(60,80,70,90,60),
//         Player(80,70,60,40,90)
//     };
//     P1[0].Display();
//     P1[1].Display();

//     return 0;
// }
