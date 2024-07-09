#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter the number of rows/columns : ";
    cin>>x;
    int arr[x][x];
    cout<<"Enter the elements of the array : ";
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<x;j++)
        {
            cin>>arr[i][j];
        }
    }
    //matrix transpose
    cout<<"The transpose matrix is : "<<endl;
    for(int i=0;i<x;i++)
    {
        for(int j=i+1;j<x;j++)
        {
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
    //printing transpose addition
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<x;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}