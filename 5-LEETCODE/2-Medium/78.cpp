#include<iostream>
using namespace std;
void printSubset(string ans,string original)
{
    if(original=="")
    {
        cout<<ans<<endl;
        return;
    }
    char ch=original[0];
    printSubset(ans,original.substr(1));
    printSubset(ans+ch,original.substr(1));
}
int main()
{
    string str="12345";
    printSubset("",str);
    return 0;
}