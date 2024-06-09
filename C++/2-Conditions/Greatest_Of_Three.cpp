#include<iostream>
using namespace std;
int main()
{
    int x,y,z;
    cout<<"Enter the first number : ";
    cin>>x;
    cout<<"Enter the second number : ";
    cin>>y;
    cout<<"Enter the third number : ";
    cin>>z;
    if(x==y && y==z)
    {
        cout<<"No one is greatest.";
    }
    else if(x>y && x>z)
    {
        cout<<x<<" is greatest.";
    }
    else if(y>x && y>z)
    {
        cout<<y<<" is greatest.";
    }
    else if(z>x && z>y)
    {
        cout<<z<<" is greatest.";
    }
    else if(x==y || y==z)
    {
        if(x>y || x>z)
        {
            cout<<x<<" is greatest.";
        }
        else if(y>x || y>z)
        {
            cout<<y<<" is greatest.";
        }
        else if(z>x || z>y)
        {
            cout<<z<<" is greatest.";
        }

    }

    return 0;
}