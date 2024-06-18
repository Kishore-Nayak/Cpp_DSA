#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,el;
    vector<int> v1;
    vector<int> v2;
    cout<<"Enter the size of the vector : ";
    cin>>n;
    cout<<"Enter the elements of the vector : ";
    for(int i=0;i<n;i++)
    {
        cin>>el;
        v1.push_back(el);
    }
    //printing the vector
    for(int i=0;i<n;i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    //reversing the vector
    for(int i=n-1;i>=0;i--)
    {
        v2.push_back(v1[i]);
    }
    //printing the reversed vector
    for(int i=0;i<n;i++)
    {
        cout<<v2[i]<<" ";
    }
    cout<<endl;
    return 0;
}