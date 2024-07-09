#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;
    int arr[size];
    cout<<"Enter the elements of the array : ";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    //int max=arr[0],min=arr[0];
    int max=INT_MIN,min=INT_MAX;

    for(int i=0;i<size;i++)
    {
        if(arr[i]>max)
        max=arr[i];
        else if(arr[i]<min)
        min=arr[i];
    }
    cout<<"The maximum element of the array is : "<<max<<endl;
    cout<<"The minimum element of the array is : "<<min<<endl;
    return 0;
}