#include<iostream>
using namespace std;
void fun(int x=6,int y=9)  //the default value of x is 6 and for y it is 9
{                           //but when the values are passed through actual parameters it is ignored
    cout<<x<<" "<<y<<endl;
}
int main()
{
    fun();
    fun(4,0);
    fun(5);                //only value of x is passed so the default value of y is 9
}