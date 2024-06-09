//print the given pattern
// 1
// 1 3
// 1 3 5

#include<iostream>
using namespace std;
int main()
{
    int row;
    cout<<"Enter the number of rows: ";
    cin>>row;
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=(2*i-1);j+=2)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}