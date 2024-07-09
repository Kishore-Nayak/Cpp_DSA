#include<iostream>
using namespace std;
int sum(int* a,int* b)
{
    return *a+*b;
}
int main()
{
    int x,y;
    cout<<"Enter the first number : ";
    cin>>x;
    cout<<"Enter the second nuumber : ";
    cin>>y;
    cout<<"The sum of two numbers is : "<<sum(&x,&y)<<endl;
    return 0;
}