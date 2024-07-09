#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"Enter the number of rows : ";
    cin>>m;
    cout<<"Enter the number of columns : ";
    cin>>n;
    int arr[m][n];
    cout<<"Enter the elements of the matrix : ";
    cout<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    //spiral
    int minr=0,minc=0;
    int maxr=m-1,maxc=n-1;
    while(minc<=maxc && minr<=maxr)
    {
        //right
        if(minc<=maxc && minr<=maxr)
        {
            for(int i=minc;i<=maxc;i++)
            {
                cout<<arr[minr][i]<<" ";
            }
        minr++;
        }
        //down
        if(minc<=maxc && minr<=maxr)
        {
            for(int i=minr;i<=maxr;i++)
            {
                cout<<arr[i][maxc]<<" ";
            }
        maxc--;
        }
        //left
        if(minc<=maxc && minr<=maxr)
        {
            for(int i=maxc;i>=minc;i--)
            {
                cout<<arr[maxr][i]<<" ";
            }
        maxr--;
        }
        //up
        if(minc<=maxc && minr<=maxr)
        {
            for(int i=maxr;i>=minr;i--)
            {
                cout<<arr[i][minc]<<" ";
            }
        minc++;
        }
    }
    return 0;
}