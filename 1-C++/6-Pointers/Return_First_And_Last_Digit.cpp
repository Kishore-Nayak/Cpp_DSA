#include<iostream>
using namespace std;
void fun(int x,int *ptr1,int *ptr2)
{
    *ptr2=x%10;
    while(x>9)
    {
        x=x/10;
    }
    *ptr1=x;
}
int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int firstdigit,lastdigit;
    int *ptr1=&firstdigit;
    int *ptr2=&lastdigit;
    fun(n,ptr1,ptr2);
    cout<<"First digit is : "<<firstdigit<<endl;
    cout<<"Last digit is : "<<lastdigit<<endl;
    return 0;
}





/*
#include<iostream>
using namespace std;
void fun(int x)
{
    int temp=x;
    int container;
    while(temp!=0)
    {
        container=temp%10;
        temp=temp/10;
    }
    cout<<"First digit is : "<<container<<endl;
    cout<<"Last digit is : "<<x%10<<endl;
}
int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    fun(n);
    return 0;
}
*/