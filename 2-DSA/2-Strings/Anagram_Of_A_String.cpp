#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string str1="physicswallah";
    string str2="wallahphysics";
    cout<<str1<<endl;
    cout<<str2<<endl;

    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());
    if(str1==str2) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}