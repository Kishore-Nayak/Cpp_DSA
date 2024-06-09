#include<iostream>
using namespace std;
int main()
{
    float x;
    cout<<"Enter a floating value : ";
    cin>>x;
    int y=(int)x;
    float z=x-y;
    cout<<"The Fractional Part is : "<<z;
    return 0;
}