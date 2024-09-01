#include<iostream>
using namespace std;

class Cricketer{
public:
    string name;
    int runs;
    float avg;
    Cricketer(string name, int runs, float avg)
    {
        this->name=name;
        this->runs=runs;
        this->avg=avg;
    }
};

void change(Cricketer* c)
{
    // (*c) is same as c->      (c must be a pointer)
    (*c).name="Sachin";
    c->runs=20000;
}

int main()
{
    Cricketer c1("Virat Kohli",25000,55.9);

    //Object pointer has no name bot the address is not stored in that variable
    Cricketer* c=new Cricketer("Rohit Sharma",18000,65.3);

    change(&c1);
    cout<<c1.name<<" "<<c1.runs<<endl;

    Cricketer* p1=&c1;
    cout<<c1.name<<endl;
    cout<<(*p1).name<<endl;

    cout<<c->name<<" "<<c->runs<<" "<<c->avg<<endl;
    return 0;
}