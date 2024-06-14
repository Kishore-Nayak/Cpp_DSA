#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum=sum+arr[i];
    }
    cout<<"The sum of elements of the array is : "<<sum<<endl;
    return 0;
}