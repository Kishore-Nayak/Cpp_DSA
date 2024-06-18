#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    int n,el,zeroes=0,ones=0;
    cout<<"Enter the size of the vector : ";
    cin>>n;
    cout<<"Enter the elements of the vector : ";
    for(int i=0;i<n;i++)
    {
        cin>>el;
        v.push_back(el);
    }
    //printing the vector before sorting
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    //sorting the array
    for(int i=0;i<n;i++)
    {
        if(v[i]==0)
        zeroes++;
        else
        ones++;
    }
    //inserting zeroes
    for(int i=0;i<zeroes;i++)
    {
        v[i]=0;
    }
    //inserting ones
    for(int i=zeroes;i<n;i++)
    {
        v[i]=1;
    }
    //printing the vector after sorting
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}