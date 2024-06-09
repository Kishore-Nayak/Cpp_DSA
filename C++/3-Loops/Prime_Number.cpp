#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter a number : ";
    cin>>x;
    int sum=0;
    for(int i=1;i<=x;i++)
    {
        if(x%i==0)
        {
            sum++;
            break;
        }
    }
    if(sum==2)
    {
        cout<<x<<" is prime.";
    }
    else{
        cout<<x<<" is not prime.";
    }
    return 0;
}