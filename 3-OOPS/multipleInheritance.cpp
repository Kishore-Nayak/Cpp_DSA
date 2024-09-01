#include<iostream>
using namespace std;
class Cricketer{ //parent class
public:
    int runs;
    int wickets;
    float average;
};

class Engineer{ //child class
public:
    int experience;
    string domain;
};

class Phodu : public Cricketer,Engineer{ //multiple inheritance
public:
    string name;
};

int main(){

    return 0;
}