#include<iostream>
using namespace std;
int main()
{
    bool x=false,y=false,z=true;
    cout<<(x==y==z);               //left to right  ((x==y)==z)
}