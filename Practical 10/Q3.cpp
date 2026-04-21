#include<iostream>
using namespace std;
class Sensor{
    public :
    int sensorID;
    void inputSensor(){
        cout<<"Enter Sensor ID : ";
        cin>>sensorID;
    }
};
class AirSensor : public Sensor {
    public :
    int AQI;
    void inputAir(){
        inputSensor();
        cout<<"Enter AQI : ";
        cin>>AQI;
    }
    bool isAirPolluted(){
        if(AQI>100){
 return true;
        }
       else{
        return false;
       }
    }
};
class TrafficSensor : public Sensor {
    public :
    int vehicleCount;
    void inputTraffic(){
        cout<<"Enter vehicle count : ";
        cin>>vehicleCount;
    }
    bool isTrafficHigh(){
        if(vehicleCount>800){
  return true;
        }
        else{
        return false;
       }
    }
};
class PollutionAnalyzer : public TrafficSensor,public AirSensor {
    public :
    string pollutionLevel;
    void analyzePollution(){
        if(isAirPolluted()){
            cout<<"High Pollution"<<endl;
            cout<<"Do not to use vehicles today and use N-95 masks you have to outside of your home."<<endl;
        }
        if(isTrafficHigh()&&isAirPolluted()==false){
          cout<<"Moderate Pollution\n";
          cout<<"Don't Use Vehicles Today \n";
        }
        if(isAirPolluted()==false&&isTrafficHigh()==false){
            cout<<"Low Pollution\n";
            cout<<"Today all things are normal keep it up\n";
        }
    }
    void displayStatus(){
      cout<<"Today AQI : "<<AQI<<endl;
      cout<<"Today Vehicle Count : "<<vehicleCount<<endl;
      cout<<"Today's Status : ";
      analyzePollution();
    }
};
int main(){
  PollutionAnalyzer p;
  p.inputAir();
  p.inputTraffic();
  p.displayStatus();
  return 0;  
}