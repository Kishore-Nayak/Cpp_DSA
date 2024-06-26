#include<iostream>
using namespace std;
int result(int x,int y)
{
    if(y==0) return 1;
    return x*result(x,y-1);
}
int main()
{
    int x,y;
    cout<<"Enter the base : ";
    cin>>x;
    cout<<"Enter the exponent : ";
    cin>>y;
    cout<<"The result is : "<<result(x,y)<<endl;
    return 0;
}