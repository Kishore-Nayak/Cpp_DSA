#include<iostream>
using namespace std;
void StarTriangle(int x)
{
    for(int i=1;i<=x;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }
}
int main()
{
    StarTriangle(3);
    StarTriangle(4);
    StarTriangle(5);
    return 0;
}