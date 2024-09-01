#include<iostream>
using namespace std;
class A{
public:
    void show(){
        cout<<"Mai A ka show hu"<<endl;
    }
};

class B : public A{
public:
    void show(){    //function overriding
        cout<<"Mai B ka show hu"<<endl;
    }
};

int main(){
    A a1;
    B b1;
    a1.show();
    b1.show();
    b1.A::show();

    //pointer
    //parent pointer can store child's address
    A* ptr = &b1;
    cout<<ptr<<endl;
    return 0;
}