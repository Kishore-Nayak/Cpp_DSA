#include<iostream>
using namespace std;
int main()
{
    int m,n,p,q;
    cout<<"Enter the no. of rows of the first matrix : ";
    cin>>m;
    cout<<"Enter the no. of columns of the first matrix : ";
    cin>>n;
    cout<<"Enter the no. of rows of the first matrix : ";
    cin>>p;
    cout<<"Enter the no. of columns of the first matrix : ";
    cin>>q;
    
    if(n==p)
    {
        int arr1[m][n];
        int arr2[p][q];
        int arr3[m][q];
        //enter the elements of the first matrix
        cout<<"Enter the elements of the first matrix : "<<endl;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>arr1[i][j];
            }
        }
        //enter the elements of the second matrix
        cout<<"Enter the elements of the first matrix : "<<endl;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>arr2[i][j];
            }
        }
        //matrix multiplication
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<m;j++)
            {
                arr3[i][j]=0;
                for(int k=0;k<n;k++)
                {
                    arr3[i][j]+=arr1[i][k]*arr2[k][j];
                }
            }
        }
        //print matrix multiplication
        cout<<"The multiplied matrix is : "<<endl;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<q;j++)
            {
                cout<<arr3[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
    else{
        cout<<"Multiplication is not possible.";
    }
    return 0;
}