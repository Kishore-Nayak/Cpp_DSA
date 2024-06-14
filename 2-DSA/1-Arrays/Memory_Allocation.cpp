#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4};

    cout<<&arr<<endl;      //0x7ffc79455dc0
    cout<<arr<<endl;       //0x7ffc79455dc0
    cout<<&arr[0]<<endl;   //0x7ffc79455dc0             in gap of 4 bytes due to integer

    cout<<&arr[1]<<endl;   //0x7ffc79455dc4
    cout<<&arr[2]<<endl;   //0x7ffc79455dc8
    cout<<&arr[3]<<endl;   //0x7ffc79455dcc
    return 0;
}