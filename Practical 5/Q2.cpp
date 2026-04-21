#include <iostream>
#include <string>

using namespace std;

class Mobile
{

private:
    string BrandName;
    int RAM;
    float Price;

public:
    Mobile(string BrandName, int RAM, float Price)
    {
        this->BrandName = BrandName;
        this->RAM = RAM;
        this->Price = Price;
    }
    Mobile(Mobile &obj)
    {
        BrandName = obj.BrandName;
        RAM = obj.RAM;
        Price = obj.Price;
    }
    void displayDetails()
    {
        cout << "Brand Name: " << BrandName << endl;
        cout << "RAM: " << RAM << endl;
        cout << "Price: " << Price << endl;
        cout << string(50, '*') << endl;
    }
};

int main()
{
    Mobile m1("MOTOROLA", 256, 50000);
    m1.displayDetails();
    Mobile m2(m1);
    m2.displayDetails();
    return 0;
}
