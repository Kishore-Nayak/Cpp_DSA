/*
vector is an replacement of an array
*/

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;       //no need to mention the size
    v.push_back(9);
    //cout<<v.size()<<endl;
    //cout<<v.capacity()<<endl;
    v.push_back(6);     //for inserting do not use v[i] (i.e. only pushback)
    //cout<<v.size()<<endl;
    //cout<<v.capacity()<<endl;
    v.push_back(3);
    //cout<<v.size()<<endl;
    //cout<<v.capacity()<<endl;
    v.push_back(4);
    //cout<<v.size()<<endl;
    //cout<<v.capacity()<<endl;
    v.push_back(3);
    //cout<<v.capacity()<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";     //if you want to update or access(print) use v[i]
    }
    cout<<endl;
    v.pop_back();

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";     //if you want to update or access(print) use v[i]
    }
    cout<<endl;
    return 0;
} 