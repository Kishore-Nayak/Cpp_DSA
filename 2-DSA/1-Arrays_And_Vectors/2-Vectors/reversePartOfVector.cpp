#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,el,a,b;
    vector<int> v;
    cout<<"Enter the size of the vector : ";
    cin>>n;
    cout<<"Enter the elements of the vector : ";
    for(int i=0;i<n;i++)
    {
        cin>>el;
        v.push_back(el);
    }
    cout<<"Enter the start and end index of the vector you want to reverse : ";
    cin>>a>>b;
    //printing the vector
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    //reversing the part of the vector
    int temp;

    /*
    for(int i=a;i<(a+((b-a+1)/2));i++)
    {
        temp=v[i];
        v[i]=v[b+a-i];
        v[b+a-i]=temp;
    }
    */
    while(a<b)
    {
        temp=v[a];
        v[a]=v[b];
        v[b]=temp;
        a++;
        b--;
    }
    //printing the reversed vector
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}