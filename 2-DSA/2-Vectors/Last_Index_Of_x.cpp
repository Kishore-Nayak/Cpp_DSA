#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,el,target,last_location;
    bool flag=false;
    cout<<"Enter the size of the vector : ";
    cin>>n;
    vector<int> v;
    cout<<"Enter the elements of the array : ";
    for(int i=0;i<n;i++)
    {
        cin>>el;
        v.push_back(el);
    }
    cout<<"Enter the element you want to find the last occurance : ";
    cin>>target;
    for(int i=v.size()-1;i>=0;i--)
    {
        if(v[i]==target)
        {
            flag=true;
            last_location=i;
            break;
        }
    }
    if(flag==true)
    {
        cout<<"The element is present in the vector and the location is : "<<last_location<<endl;
    }
    else{
        cout<<"Element is not present in the vector."<<endl;
    }
    return 0;
}