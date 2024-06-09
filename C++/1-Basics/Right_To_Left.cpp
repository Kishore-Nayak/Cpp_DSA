#include<iostream>
using namespace std;
int main()
{
    int p=5,q=10;
    p+=q-=p;          //Right to Left
    cout<<p<<endl<<q<<endl;
}