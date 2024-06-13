#include<iostream>
using namespace std;
int main()
{
    int *ptr1=NULL;   //Reserved Address
    int *ptr2=NULL;  
    int *ptr3=NULL;   //  NULL  =  0  =  '\0'
    cout<<ptr1<<" "<<ptr2<<" "<<ptr3<<endl;    //0x0
    return 0;
}