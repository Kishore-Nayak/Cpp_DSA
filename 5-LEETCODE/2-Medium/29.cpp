#include<iostream>
#include<cmath>
using namespace std;
int divide(int dividend,int divisor)
{
    long result=0;
    long dividend2=dividend;
    long divisor2=divisor;
    bool flag1=false;
    bool flag2=false;
    if(dividend2>0)
    {
        if(divisor2==1) return dividend2;
        if(divisor2==-1) return (-1)*dividend2;
    }
    if(dividend2<0 && divisor2<0)
    {
        dividend2=(-1)*dividend2;
        divisor2=(-1)*divisor2;
    }
    else if(dividend2<0)
    {
        flag1=true;
        dividend2=(-1)*dividend2;
    }
    else if(divisor2<0)
    {
        flag2=true;
        divisor2=(-1)*divisor2;
    }
    // double temp=log(dividend2)-log(divisor2);
    // result=exp(temp);
    for(long i=divisor2;i<=dividend2;i+=divisor2)
    {
        result++;
    }
    if(flag1==true || flag2==true)
    {
        result=(-1)*result;
    }
    if(result>2147483647) return 2147483647;
    if(result<-2147483648) return -2147483648;
    return result;
}
int main()
{
    cout<<divide(-2147483648,4)<<endl;
    return 0;
}