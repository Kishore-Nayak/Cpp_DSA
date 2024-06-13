#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter an integer : ";
    cin>>x;
    cout<<"The absolute number is : ";

    //absolute number
    //  |-21|=21     |35|=35     |0|=0

    if(x<0)
    {
        cout<<x*(-1);
    }
    else{
        cout<<x;
    }

}