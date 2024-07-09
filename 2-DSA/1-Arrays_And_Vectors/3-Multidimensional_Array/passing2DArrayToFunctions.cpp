#include<iostream>
#include<vector>
using namespace std;
void change(int arr[])
{
    arr[0]=10;
}
void change2D(int arr2[2][2])
{
    arr2[0][0]=125;
}
int main()
{
    int arr[3]={1,2,3};
    cout<<arr[0]<<endl;
    change(arr);
    cout<<arr[0]<<endl;

    int arr2[][2]={{4,5},{6,7}};
    cout<<arr2[0][0]<<endl;
    change2D(arr2);
    cout<<arr2[0][0]<<endl;
    return 0;
}