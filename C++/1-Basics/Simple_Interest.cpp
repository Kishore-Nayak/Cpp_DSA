#include<iostream>
using namespace std;
int main()
{
    float si,time,rate,amount;
    cout<<"Enter the Amount : ";
    cin>>amount;
    cout<<"Enter the Rate of Interest : ";
    cin>>rate;
    cout<<"Enter the Time Period : ";
    cin>>time;
    si=time*rate*amount/100;
    cout<<"The Simple Interest is : "<<si;
}