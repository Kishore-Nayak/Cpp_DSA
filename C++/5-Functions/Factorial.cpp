#include<iostream>
using namespace std;

int fact(int n)
{
    if(n==1 or n==0)
    return 1;
    return n*fact(n-1);
}

int main()
{
    int x;
    cout<<"Enter a number : ";
    cin>>x;
    cout<<"The factorial is : "<<fact(x);
    return 0;
}