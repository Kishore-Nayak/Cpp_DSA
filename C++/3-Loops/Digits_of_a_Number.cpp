#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter a number : ";
    cin>>x;
    int count=0;
    do{
        count++;
        x=x/10;
    }while(x>0);
    cout<<"Number of digits : "<<count;
    return 0;
}