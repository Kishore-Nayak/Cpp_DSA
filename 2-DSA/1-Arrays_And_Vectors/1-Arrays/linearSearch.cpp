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

    int x;
    cout<<"Enter the element you want to search : ";
    cin>>x;
    int location[size],location_counter=0;
    bool flag=false;
    //searching element x
    for(int i=0;i<size;i++)
    {
        if(x==arr[i])
        {
            flag=true;
            location[location_counter]=i;
            location_counter++;
        }
    }
    if(flag==true)
    {
        cout<<x<<" is present in the array and the location/locations is/are : ";
        for(int i=0;i<location_counter;i++)
        {
            cout<<location[i]<<" ";
        }
        cout<<endl;
    }
    else{
        cout<<"Element is not present in the array."<<endl;
    }
    return 0;
}