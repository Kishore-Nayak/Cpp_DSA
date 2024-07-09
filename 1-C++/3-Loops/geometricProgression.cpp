// 1 2 4 8 16 32 .......

// d = common ratio

#include<iostream>
using namespace std;
int main()
{
    int n,x=1;
    cout<<"Enter the number of terms : ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<x<<"  ";
        x*=2;
    }
    return 0;
}