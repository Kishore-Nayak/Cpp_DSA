#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"Enter the number of rows : ";
    cin>>x;
    cout<<"Enter the number of columns : ";
    cin>>y;
    int arr[x][y];
    cout<<"Enter the elements of the array : ";
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            cin>>arr[i][j];
        }
    }
    int max=arr[0][0];
    int min=arr[0][0];
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            if(max<arr[i][j]) max=arr[i][j];
            if(min>arr[i][j]) min=arr[i][j];
        }
    }
    cout<<"The maximum element is : "<<max<<endl;
    cout<<"The minimum element is : "<<min<<endl;
    return 0;
}