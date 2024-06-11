#include<iostream>
using namespace std;
void swap(int* a,int* b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int x,y;
    cout<<"Enter the first number : ";
    cin>>x;
    cout<<"Enter the second number : ";
    cin>>y;
    swap(&x,&y);
    cout<<x<<" "<<y;
    return 0;
}