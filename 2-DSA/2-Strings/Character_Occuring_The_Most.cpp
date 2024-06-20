#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    string str="aabcdddd";
    int n=str.size();
    vector<int> v(26,0);
    for(int i=0;i<n;i++)
    {
        char ch=str[i];
        int ascii=(int)ch;
        v[ascii-97]++;
    }
    //finding max number in v
    int max=0;
    for(int i=0;i<26;i++)
    {
        if(v[i]>max) max=v[i];
    }
    //printing the max char
    for(int i=0;i<26;i++)
    {
        if(v[i]==max)
        {
            int ascii=97+i;
            cout<<(char)ascii<<" "<<max<<endl;
        }
    }
    return 0;
}