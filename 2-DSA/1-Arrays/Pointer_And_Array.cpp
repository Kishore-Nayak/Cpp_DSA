#include<iostream>
using namespace std;
int main()
{
    int arr[8]={1,2,5,3,7,5,9,0};
    int *ptr=arr;
    cout<<*ptr<<endl;
    cout<<&arr<<endl;
    cout<<ptr[3]<<endl;    //pointer has access to the entire array
    for(int i=0;i<8;i++)
    {
        cout<<i[arr]<<" ";           //it is also possible
    }
    cout<<endl;
    return 0;
}