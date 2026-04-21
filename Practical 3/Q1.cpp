#include <iostream>
#include<string>
using namespace std;

int main(){

    int rollno,marks;

    cout<<"Enter Roll No. :";
    cin>>rollno;

    cout<<"Enter Marks :";
    cin>>marks;

    cout<<string(50,'*')<<endl;

    cout<<"Roll :"<<rollno<<endl<<"Marks :"<<marks<<endl;

    bool pass;

    pass = (marks>=40);

    if (pass==true){
        cout<<"Result : Pass";
    }

    else
    {
        cout<<"Result : Fail";
    }

    return 0;
}
