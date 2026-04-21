#include<iostream>
using namespace std;

int main(){

    int n;

    cout<<"Enter a number : ";
    cin>>n;

    bool isEVEN;

    isEVEN = (n%2==0) ;

    if (isEVEN==true){
        cout<<"Even number";
    }

    else{
        cout<<"Odd Number";
    }

    return 0;
}