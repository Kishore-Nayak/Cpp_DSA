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
    int trans[y][x];
    cout<<"Enter the elements of the array : ";
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            cin>>arr[i][j];
        }
    }
    //matrix transpose
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            trans[j][i]=arr[i][j];
        }
    }
    //printing transpose addition
    for(int i=0;i<y;i++)
    {
        for(int j=0;j<x;j++)
        {
            cout<<trans[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}