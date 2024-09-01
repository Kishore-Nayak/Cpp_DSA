#include<iostream>
using namespace std;

class A{
private:
    int a_private = 10;
public:
    friend void show(A &a);
};
void show(A &a){
    cout<<a.a_private<<endl;
}
int main(){
    A a1;
    show(a1);
    return 0;
}