/*
    In total there are x no of stairs
    At a time you can climb 1 or 2 stairs
*/

#include<iostream>
using namespace std;
int ways(int x)
{
    if(x==2) return 2;
    if(x==1) return 1;
    return ways(x-1) + ways(x-2);
}
int main()
{
    int x;
    cout<<"Enter the number of stairs : ";
    cin>>x;
    cout<<"The number of ways to climb the stair case is : "<<ways(x)<<endl;
    return 0;
}