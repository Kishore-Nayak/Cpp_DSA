//sum of the series
// 1-2+3-4+5-6..........

#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"Enter the number of terms : ";
    cin>>n;
    // for(int i=1;i<=n;i++)
    // {
    //     if(i%2!=0)
    //     sum+=i;
    //     else
    //     sum-=i;
    // }


    //another method
    int x=n/2;
    sum=(-1*x)+n*(n-2*x);
    cout<<"Sum is : "<<sum;
    return 0;
}