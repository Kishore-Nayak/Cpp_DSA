#include<iostream>
using namespace std;
int main()
{
    int n,product=1;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        product=product*arr[i];
    }
    cout<<"The product of elements of the array is : "<<product<<endl;
    return 0;
}