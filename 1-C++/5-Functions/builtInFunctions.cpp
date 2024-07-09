#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"Enter two numbers : ";
    cin>>x>>y;
    cout<<min(x,y)<<endl;   //builtin function
    cout<<max(x,y)<<endl;
    return 0;
}