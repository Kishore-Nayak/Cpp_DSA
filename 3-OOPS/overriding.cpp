#include<iostream>
using namespace std;
class Scooty{ //parent class
public:
    int topSpeed;
    float mileage;
    // virtual function
    virtual void sound(){   //if virtual keyword is there the it will skip to the Bike class
        cout<<"Vroom Vroom ..."<<endl;
    }
private:
    int bootspace;
};

class Bike : public Scooty{ //child class / derived class
public:
    int gears;
    void sound(){
        cout<<"Dhroom Dhroom ..."<<endl;
    }
};

int main(){
    Scooty* s = new Bike(); //overriding
    s->sound();
    return 0;
}