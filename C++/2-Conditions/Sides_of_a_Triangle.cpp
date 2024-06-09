#include<iostream>
using namespace std;
int main()
{
    int x,y,z;
    cout<<"Enter the first side : ";
    cin>>x;
    cout<<"Enter the second side : ";
    cin>>y;
    cout<<"Enter the third side : ";
    cin>>z;
    if(((x+y)>z) && ((y+z)>x) && ((z+x)>y))
    {
        cout<<"Triangle is possible";
    }
    else{
        cout<<"Triangle is not possible";
    }
    return 0;
}