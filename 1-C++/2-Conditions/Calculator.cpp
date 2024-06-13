#include<iostream>
using namespace std;
int main()
{
    float x,y;
    char ch;
    cout<<"Enter the problem : ";
    cin>>x>>ch>>y;                      //Important (No need for space)

    switch(ch)
    {
        case '+':
        cout<<x+y;
        break;
        case '-':
        cout<<x-y;
        break;
        case '*':
        cout<<x*y;
        break;
        case '/':
        cout<<x/y;
        break;
        default:
        cout<<"Invalid Operator";
    }
    return 0;
}