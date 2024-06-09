#include<iostream>
using namespace std;
int main()
{
    float x;    // base number
    int y;      // exponent
    cout<<"Enter the base number : ";
    cin>>x;
    cout<<"Enter the exponent : ";
    cin>>y;

    float result=1.0;
    if(y>0)
    {
        for(int i=1;i<=y;i++)
        {
        result*=x;
        }
        cout<<"Result is : "<<result;
    }
    else if(y<0)
    {
        y=-1*y;
        for(int i=1;i<=y;i++)
        {
        result*=x;
        }
        result=1.0/result;
        cout<<"Result is : "<<result;
    }
    else if(x==0 && y==0)
    {
        cout<<"Not defined.";
    }
    return 0;
}