#include<iostream>
using namespace std;
int gcd(int x,int y)
{
    if(x==0) return y;
    return gcd(y%x,x);
}
int main()
{
    int a=27,b=45;  // a>0 && b>0
    cout<<gcd(a,b)<<endl;
    return 0;
}