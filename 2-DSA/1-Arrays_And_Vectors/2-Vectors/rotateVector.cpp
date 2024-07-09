#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    int n,el,k;
    cout<<"Enter the size of the vector : ";
    cin>>n;
    cout<<"Enter the elements of the vector : ";
    for(int i=0;i<n;i++)
    {
        cin>>el;
        v.push_back(el);
    }
    cout<<"Enter the number of steps you want to rotate the array : ";
    cin>>k;
    //printing the vector before rotation
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    //rotating the vector
    for(int i=0;i<k;i++)
    {
        for(int j=n-1;j>=0;j--)
        {
            v[j+1]=v[j];
        }
        v[0]=v[n];
    }
    //printing the vector after rotation
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}