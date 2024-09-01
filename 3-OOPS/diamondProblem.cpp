#include<iostream>
using namespace std;
class A{
public:
    int a_ka_public;
};
class B : virtual public A{     //virtual keyword is needed to create only one instance of a single class
public:
    int b_ka_public;
};
class C : virtual public A{
public:
    int c_ka_public;
};
class D : public B, public C{
public:
    int d_ka_public;
};
int main(){
    D d1;
    d1.a_ka_public = 6;
    cout<<d1.a_ka_public<<endl;
    return 0;
}