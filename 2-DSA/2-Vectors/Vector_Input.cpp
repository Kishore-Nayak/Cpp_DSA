#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    int n,el;
    cout<<"Enter the size of the vector : ";
    cin>>n;
    cout<<"Enter the elements of the vector : ";
    for(int i=0;i<n;i++)
    {
        cin>>el;
        v.push_back(el);
    }
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}