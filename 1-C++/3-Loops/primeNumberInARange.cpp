#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"Enter the lower limit : ";
    cin>>x;
    cout<<"Enter the upper limit : ";
    cin>>y;
    for(int i=x;i<=y;i++)
    {
        int sum=0;
        for(int j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                sum++;
            }
        }
        if(sum==2)
        cout<<i<<"  ";
    }
    return 0;
}