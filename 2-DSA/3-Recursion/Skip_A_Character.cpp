#include<iostream>
#include<string>
using namespace std;
/*
void removeChar(string ans,string original)
{
    if(original.size()==0)
    {
        cout<<ans<<endl;
        return;
    }
    char ch=original[0];
    if(ch=='a') removeChar(ans,original.substr(1));
    else removeChar(ans+ch,original.substr(1));
}
*/
void removeChar(string ans,string original,int idx)
{
    if(original.size()==idx)
    {
        cout<<ans<<endl;
        return;
    }
    char ch=original[idx];
    if(ch=='a') removeChar(ans,original,idx+1);
    else removeChar(ans+ch,original,idx+1);
}
int main()
{
    string str="kishore nayak";
    string s="";
    //removeChar(s,str);
    removeChar(s,str,0);
    return 0;
}