#include<iostream>
using namespace std;
int main()
{
    int a=0,b=1,n,fibo;
    cout<<"Enter the value of n : ";
    cin>>n;
    if(n==1) cout<<0;
    else if(n==2) cout<<1;
    else if(n>2)
    {
        for(int i=3;i<=n;i++)
        {
            fibo=a+b;
            a=b;
            b=fibo;
        }
        cout<<fibo;
    }

    return 0;
}