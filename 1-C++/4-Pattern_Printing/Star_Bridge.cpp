#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number if rows (even only) : ";
    cin>>n;
    for(int i=1;i<2*n;i++)
    {
        cout<<" * ";
    }
    cout<<endl;
    int x=n-1;
    int z=x;
    int y=1;
    for(int j=1;j<n;j++)
    {
        for(int k=1;k<=x;k++)
        {
            cout<<" * ";
        }
        for(int l=1;l<=y;l++)
        {
            cout<<"   ";
        }
        for(int k=1;k<=z;k++)
        {
            cout<<" * ";
        }
        x--;
        y+=2;
        z--;
        cout<<endl;
    }
    return 0;
}