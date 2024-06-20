#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string str="kishore";
    cout<<str<<endl;
    sort(str.begin(),str.end());   //according to ASCII value
    cout<<str<<endl;
    return 0;
}