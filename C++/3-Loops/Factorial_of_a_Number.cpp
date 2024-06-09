#include<iostream>
using namespace std;
int main()
{
    int x,factorial=1;
    cout<<"Enter a number : ";
    cin>>x;
    if(x==0)
    {
        cout<<"Factorial is : 1";
    }
    else
    {
        for(int i=x;i>0;i--)
        {
        factorial*=i;
        }
        cout<<"Factorial is : "<<factorial;
    }
    return 0;
}