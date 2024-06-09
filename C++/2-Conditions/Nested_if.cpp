//Number is divisible by 3 or 5 but not divisible by 15

#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter a number : ";
    cin>>x;
    if(x%3==0 || x%5==0)
    {
        if(x%15!=0)
        {
            cout<<x<<" is divisible by 3 or 5 but not divisible by 15";
        }
        else
        {
        cout<<"Condition is not satisfying.";
        }
    }
    else
    {
        cout<<"Condition is not satisfying.";
    }
    return 0;
}