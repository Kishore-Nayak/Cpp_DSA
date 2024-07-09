#include<iostream>
using namespace std;
void pip(int x)
{
    if(x==0) return;
    cout<<"Pre "<<x<<endl;
    pip(x-1);
    cout<<"In "<<x<<endl;
    pip(x-1);
    cout<<"Post "<<x<<endl;
}
int main()
{
    pip(3);
    return 0;
}