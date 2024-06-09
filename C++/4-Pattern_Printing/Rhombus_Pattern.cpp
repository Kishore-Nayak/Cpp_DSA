/*
print the given pattern
    ****
   ****
  ****
****
*/

#include<iostream>
using namespace std;
int main()
{
    int row;
    cout<<"Enter the number of rows : ";
    cin>>row;
    for(int i=row;i>0;i--)
    {
        //for space
        for(int j=1;j<i;j++)
        {
            cout<<"   ";
        }
        //for star
        for(int k=1;k<=row;k++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }
    return 0;
}