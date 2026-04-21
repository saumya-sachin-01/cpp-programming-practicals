#include <iostream>
using namespace std;
// Base class
class Animal {
    string name;
    protected :
    string breed;
public:
void input(string n){
    name = n;
}
int v;
void eat() {
cout << "I can eat!\n";
}
void sleep() {
cout << "I can sleep!\n";
}

};
// Derived class
class Dog : public Animal {
public:
int s=v;
    
// Animal::input;
void bark() {
cout << "I can bark! Woof woof!\n";
}
void kuchv(){
    sleep();
    bark();
}
};


class puppy :public Animal{
    public :
    int age;
};

int main() {
    puppy p1;
    p1.age;
Dog myDog;
// Calling base class functions
myDog.eat(); // Inherited from Animal
myDog.kuchv();
myDog.sleep(); // Inherited from Animal
// Calling derived class function
myDog.bark(); // Defined in Dog
return 0;
}