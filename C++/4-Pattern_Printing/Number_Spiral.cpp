/*
1 1 1 1 1 1 1 
1 2 2 2 2 2 1
1 2 3 3 3 2 1
1 2 3 4 3 2 1
1 2 3 3 3 2 1
1 2 2 2 2 2 1
1 1 1 1 1 1 1
*/



//My method



/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the maximum digit : ";
    cin>>n;
    int x=(2*n-1);
    for(int i=1;i<=x/2;i++)
    {
        int k=i;
        for(int j=1;j<=x;j++)
        {
            if(j<=i)
            cout<<j;
            else if(j>i && j<=(x-i+1))
            cout<<i;
            else
            {
                cout<<k-1;
                k--;
            }
        }
        cout<<endl;
    }
    for(int k=1;k<=x;k++)
    {
        if(k<=(x/2+1))
        cout<<k;
        else
        cout<<x-k+1;
    }
    cout<<endl;
    for(int i=x/2;i>0;i--)
    {
        int k=i;
        for(int j=1;j<=x;j++)
        {
            if(j<=i)
            cout<<j;
            else if(j>i && j<=(x-i+1))
            cout<<i;
            else
            {
                cout<<k-1;
                k--;
            }
        }
        cout<<endl;
    }
    return 0;
}
*/



//Mast Method



#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the maximum digit : ";
    cin>>n;
    for(int i=1;i<=2*n-1;i++)
    {
        for(int j=1;j<=2*n-1;j++)
        {
            int a=i;
            int b=j;
            if(a>n)
            a=2*n-i;
            if(b>n)
            b=2*n-j;
            cout<<" "<<min(a,b)<<" ";
        }
        cout<<endl;
    }
    return 0;
}