#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter a number : ";
    cin>>x;
    int sum=0,lastdigit;
    while(x>0)
    {
        lastdigit=x%10;
        sum+=lastdigit;
        x=x/10;
    }
    cout<<"Sum is : "<<sum;
    return 0;
}