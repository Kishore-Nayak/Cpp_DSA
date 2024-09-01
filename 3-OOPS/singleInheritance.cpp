#include<iostream>
using namespace std;
class Scooty{ //parent class
public:
    int topSpeed;
    float mileage;
};

class Bike : public Scooty{ //child class
    int gears;
};

int main(){

    return 0;
}