#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"Enter the no. of rows of the matrix : ";
    cin>>m;
    cout<<"Enter the no. of columns of the matrix : ";
    cin>>n;
    int arr[m][n];
    cout<<"Enter the elements of the matrix : "<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    //printing the matrix in wave form
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i%2==0)
            {
                cout<<arr[i][j]<<" ";
            }
            else{
                cout<<arr[i][n-1-j]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}