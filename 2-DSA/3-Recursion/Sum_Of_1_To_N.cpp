#include<iostream>
using namespace std;
int sum1toN(int n)
{
    if(n==0) return 0;
    return n+sum1toN(n-1);
}
int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    cout<<"The sum is : "<<sum1toN(n)<<endl;
    return 0;
}