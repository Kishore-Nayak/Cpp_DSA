//print the given pattern
//rows=5           only odd numbers
//  *
//  *
//*****
//  *
//  *


#include<iostream>
using namespace std;
int main()
{
    int row;
    cout<<"Enter the number of rows/columns (odd number only) : ";
    cin>>row;
    int x=row/2+1;
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=row;j++)
            {
                if(i==x || j==x)
                cout<<" * ";
                else
                cout<<"   ";
            }
        cout<<endl;
    }

    return 0;
}

/*
#include<iostream>
using namespace std;
int main()
{
    int row;
    cout<<"Enter the number of rows/columns (odd number only) : ";
    cin>>row;
    int x=row/2+1;
    for(int i=1;i<=row;i++)
    {
        if(i!=x)
        {
            for(int j=1;j<=row;j++)
            {
                if(j!=x)
                cout<<"   ";
                else
                cout<<" * ";
            }
        }
        else if(i==x)
        {
            for(int j=1;j<=row;j++)
            {
                cout<<" * ";
            }
        }
        cout<<endl;
    }

    return 0;
}
*/