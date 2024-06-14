#include<iostream>
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

    int max=arr[0];

    for(int i=0;i<size;i++)
    {
        if(arr[i]>max)
        max=arr[i];
    }
    int smax=arr[0];
    //finding 2nd largest element
    for(int i=0;i<size;i++)
    {
        if(arr[i]>smax && arr[i]!=max)
        smax=arr[i];
    }
    cout<<"The second maximum element of the array is : "<<smax<<endl;
    return 0;
}