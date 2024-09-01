#include<iostream>
using namespace std;
class Bike{
public:
    static int noOfWheels;  //this belongs to the class and same for all objects
    void display(){
        cout<<noOfWheels<<endl;
    }
    static void increaseNoOfWheels(){   //static function (same for all objects)
        noOfWheels++;
    }
};

int Bike::noOfWheels=2;

int main(){
    Bike Bajaj;
    Bike RoyalEnfield;
    Bajaj.display();
    RoyalEnfield.display();

    Bajaj.increaseNoOfWheels();
    Bajaj.display();
    RoyalEnfield.display();

    RoyalEnfield.increaseNoOfWheels();
    Bajaj.display();
    RoyalEnfield.display();
    return 0;
}