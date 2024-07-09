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
    //printing the vector before sorting
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    //sorting the array
    int i=0,j=n-1;
    while(i<j)
    {
        if(v[j]==1) j--;
        if(v[i]==0) i++;
        if(i>j) break;
        if(v[i]==1 && v[j]==0){
            v[i]=0;
            v[j]=1;
            i++;
            j--;
        }
    }
    //printing the vector after sorting
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}