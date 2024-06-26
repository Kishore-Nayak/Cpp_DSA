#include<iostream>
using namespace std;
void print(int m,int n)
{
    if(m>n) return;
    cout<<m<<endl;
    print(m+1,n);
}
int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    print(1,n);
    return 0;
}