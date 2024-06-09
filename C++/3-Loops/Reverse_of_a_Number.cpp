#include<iostream>
using namespace std;
int main()
{
    int original,reverse=0,lastdigit;
    cout<<"Enter a number : ";
    cin>>original;
    while(original>0)
    {
        lastdigit=original%10;
        reverse*=10;
        reverse=reverse+lastdigit;
        original/=10;
    }
    cout<<"Reverse is : "<<reverse;
    return 0;
}