#include<iostream>
using namespace std;
int fact(int n)
{
    if(n==0 || n==1) return 1;
    return n*fact(n-1);
}
int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int x=fact(n);
    cout<<"The factorial is : "<<x<<endl;
    return 0;
}