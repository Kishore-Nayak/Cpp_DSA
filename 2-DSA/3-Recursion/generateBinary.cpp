#include<iostream>
#include<string>
using namespace std;
void generate(string s, int n)
{
    if(s.length() == n)
    {
        cout<<s<<endl;
        return;
    }
    generate(s+'0',n);
    if(s[s.length()-1] != '1') generate(s+'1',n);    // no consecutive 1's
}
int main()
{
    int n = 3;
    generate("",n);
    return 0;
}