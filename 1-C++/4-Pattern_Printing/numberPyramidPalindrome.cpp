/*
print the given pattern
   1
  121
 12321
1234321
*/

#include<iostream>
using namespace std;
int main()
{
    int row;
    cout<<"Enter the number of rows : ";
    cin>>row;
    for(int i=1;i<=row;i++)
    {
        //space
        for(int j=1;j<=row-i;j++)
        {
            cout<<"   ";
        }
        //ascending number
        for(int j=1;j<=i;j++)
        {
            cout<<" "<<j<<" ";
        }
        //descending number
        for(int j=i-1;j>0;j--)
        {
            cout<<" "<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}