#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    string str[]={"0123","0023","456","00182","940","002901"};
    // vector<int> v;
    // for(int i=0;i<6;i++)
    // {
    //     int x=stoi(str[i]);
    //     v.push_back(x);
    // }
    // sort(v.begin(),v.end());

    // cout<<v[v.size()-1]<<endl;
    int max=stoi(str[0]);
    string maxS;
    for(int i=1;i<6;i++)
    {
        if(max<stoi(str[i])) 
        {
            max=stoi(str[i]);
            maxS=str[i];
        }
    }
    cout<<max<<endl;
    cout<<maxS<<endl;
    return 0;
}