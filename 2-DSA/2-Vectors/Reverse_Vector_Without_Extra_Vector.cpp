#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,el;
    vector<int> v;
    cout<<"Enter the size of the vector : ";
    cin>>n;
    cout<<"Enter the elements of the vector : ";
    for(int i=0;i<n;i++)
    {
        cin>>el;
        v.push_back(el);
    }
    //printing the vector
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    //reversing the vector
    int temp;
    for(int i=0;i<n/2;i++)
    {
        temp=v[i];
        v[i]=v[n-1-i];
        v[n-1-i]=temp;
    }
    //printing the reversed vector
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}