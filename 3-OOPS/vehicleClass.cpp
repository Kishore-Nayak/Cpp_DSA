#include<iostream>
using namespace std;
class Vehicle{ //parent class
public:
    int topSpeed;
    float mileage;
    string fueltype;
};

class TwoWheeler : public Vehicle{ //child class
    
};

class FourWheeler : public Vehicle{ //child class
    
};

class Bike : public TwoWheeler{ //child class
    
};

class Car : public FourWheeler{ //child class
    bool sunroof;
};

int main(){

    return 0;
}