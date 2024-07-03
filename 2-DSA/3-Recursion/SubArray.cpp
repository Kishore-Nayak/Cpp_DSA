#include<iostream>
#include<string>
#include<vector>
using namespace std;
void subArray(vector<int> v, int arr[],int n,int idx)
{
    if(idx==n)
    {
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i];
        }
        cout<<endl;
        return;
    }
    subArray(v,arr,n,idx+1);
    if(v.size()==0)
    {
        v.push_back(arr[idx]);
        subArray(v,arr,n,idx+1);
    }
    else if(arr[idx-1]==v[v.size()-1])
    {
        v.push_back(arr[idx]);
        subArray(v,arr,n,idx+1);
    }
    
}
int main()
{
    int arr[]={1,2,3,4};
    int n=sizeof(arr)/sizeof(int);
    vector<int> v;
    subArray(v,arr,n,0);

    //loop method
    /*
    for(int i=0;i<n;i++)
    {
        for(int k=i;k<n;k++)
        {
            for(int j=i;j<=k;j++)
        {
            cout<<arr[j];
        }
        cout<<endl;
        }
    }
    */
    return 0;
}