/*
print the given pattern
   *
  ***
 *****
*******
 *****
  ***
   *

*/

#include<iostream>
using namespace std; 
int main()
{
    int row;
    cout<<"Enter the number of rows (odd numbers only) : ";
    cin>>row;
    int k=row-2;
    for(int i=1;i<=row;i++)
    {
        if(i<=row/2)
        {
            //spaces
            for(int j=1;j<=(row/2+1)-i;j++)
            {
                cout<<"   ";
            }
            //stars
            for(int j=1;j<=2*i-1;j++)
            {
                cout<<" * ";
            }
        }
        else if(i==row/2+1)
        {
            for(int j=1;j<=2*i-1;j++)
            {
            cout<<" * ";
            }
            cout<<endl;
        }
        if(i>row/2)
        {
            //spaces
            for(int j=1;j<=i-(row/2);j++)
            {
                cout<<"   ";
            }
            //stars
            for(int j=k;j>0;j--)
            {
                cout<<" * ";
            }
            k-=2;
        }
        cout<<endl;
    }
    return 0;
}