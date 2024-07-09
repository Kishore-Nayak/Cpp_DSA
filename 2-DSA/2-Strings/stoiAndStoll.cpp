#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str="756114";
    int x=stoi(str);         //string to integer
    long long y=stoll(str);  //string to long long
    cout<<x<<endl;
    cout<<y<<endl;
    return 0;
}