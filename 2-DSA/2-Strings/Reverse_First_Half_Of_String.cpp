#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string str="Russia";
    cout<<str<<endl;
    int n=str.size()/2;
    reverse(str.begin(),str.begin()+n);
    cout<<str<<endl;
    return 0;
}