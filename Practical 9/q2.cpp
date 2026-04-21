#include<iostream>
#include<string>
using namespace std;
class Order{
    int o_ID;
string c_name;
public :
    void setcustomerdetails(){
        cout<<"Enter Order ID : ";
        cin>>o_ID;
        cout<<"Enter customer name : ";
        cin.ignore();
        getline(cin,c_name);
    }
    int geto_ID(){
        return o_ID;
    }
     string getc_name(){
        return c_name;
    }
};

class FoodOrder : public Order{
    int del_min;
    string f_c;
    public :
    void setdeliverydetails(){
        cout<<"Enter delivery time : "<<endl;
        cin>>del_min;
         cout<<"Enter Food Category : "<<endl;
        cin.ignore();
        getline(cin,f_c);
    }
    void deliverydelaycheck(){
        if(del_min>30){
              cout<<"Late Delivery !!"<<endl;
        }
    }
    void display(){
        cout<<string(50,'-')<<"\n";
        cout<<"Order Summary : \n";
        cout<<"Order ID : "<<geto_ID()<<"\n";
        cout<<"Customer name : "<<getc_name()<<"\n";
         cout<<"Delivery time : "<<del_min<<endl;
           cout<<"Food Category : "<<f_c<<endl;
    }
};

int main(){
    FoodOrder fo1;
    fo1.setcustomerdetails();
    fo1.setdeliverydetails();
    fo1.deliverydelaycheck();
    fo1.display();
    return 0;
}