#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int main(){

    string productNAME;
    int price,quantity,total;

    cout<<"Enter Product Name : ";
    cin>>productNAME;

    cout<<"Enter Price : ";
    cin>>price;

    cout<<"Enter Quantity : ";
    cin>>quantity;

    total = quantity*price;

     
    cout<<setw(15)<<"Product Name"<<setw(10)<<"Price"<<setw(10)<<"Quantity"<<setw(10)<<"Total"<<endl;

    cout<<string(50,'-')<<endl;
   
    cout<<setw(15)<<productNAME<<setw(10)<<price<<setw(10)<<quantity<<setw(10)<<total;

    return 0;

}