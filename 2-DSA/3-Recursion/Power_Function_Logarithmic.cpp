#include<iostream>
using namespace std;
int power(int x,int y)
{
    if(y==1) return x;
    int ans=power(x,y/2);
    if(y%2==0) return ans*ans;
    return ans*ans*x;
}
int main()
{
    int x,y;
    cout<<"Enter the base : ";
    cin>>x;
    cout<<"Enter the exponent : ";
    cin>>y;
    cout<<"The result is : "<<power(x,y)<<endl;
    return 0;
}