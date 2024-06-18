#include<iostream>
using namespace std;
void fun(int array[8])
{
    array[0]++;
    for(int i=0;i<8;i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int arr[8]={1,2,5,3,7,5,9,0};
    fun(arr);
    for(int i=0;i<8;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}