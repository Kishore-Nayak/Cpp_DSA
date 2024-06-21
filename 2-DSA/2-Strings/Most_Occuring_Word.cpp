#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<sstream>
using namespace std;
int main()
{
    string str="Kishore is a CSE student. He is a problem solver also.";
    stringstream ss(str);
    string temp;
    vector<string> v;
    while(ss>>temp)
    {
        v.push_back(temp);
    }
    //sorting the vector
    sort(v.begin(),v.end());

    int count=1;
    int maxCount=1;
    for(int i=1;i<v.size();i++)
    {
        if(v[i]==v[i-1]) count++;
        else count=1;
        maxCount=max(count,maxCount);
    }
    count=1;
    for(int i=1;i<v.size();i++)
    {
        if(v[i]==v[i-1]) count++;
        else count=1;
        if(count==maxCount)
        cout<<v[i]<<" "<<maxCount<<endl;
    }
    return 0;
}