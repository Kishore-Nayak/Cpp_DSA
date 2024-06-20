#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    // cout<<"Enter your name : ";
    // cin>>str;
    // cout<<str<<endl;

    cout<<"Enter your name : ";
    getline(cin,str);          //very very important
    cout<<str<<endl;
    return 0;
}