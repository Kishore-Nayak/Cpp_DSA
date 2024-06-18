#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"Enter the number of rows : ";
    cin>>x;
    cout<<"Enter the number of columns : ";
    cin>>y;
    int arr1[x][y];
    int arr2[x][y];
    int sum[x][y];
    cout<<"Enter the elements of the 1st array : ";
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            cin>>arr1[i][j];
        }
    }
    cout<<"Enter the elements of the 2nd array : ";
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            cin>>arr2[i][j];
        }
    }
    //matrix addition
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            sum[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
    //printing matrix addition
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}