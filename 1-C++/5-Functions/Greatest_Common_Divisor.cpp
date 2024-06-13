#include<iostream>
using namespace std;
int gcd(int a,int b)
{
    int m;
    for(int i=min(a,b);i>0;i--)
    {
        if(a%i==0 && b%i==0)
        {
            m=i;
            break;
        }
    }
    return m;
}
int main()
{
    int x,y;
    cout<<"Enter the first number : ";
    cin>>x;
    cout<<"Enter the second number : ";
    cin>>y;
    int z=gcd(x,y);
    cout<<"The GCD of the two numbers is : "<<z<<endl;
}