#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int findWinningPlayer(vector<int>& skills, int k) {
        int n=skills.size();
        int idx;
        vector<int> v;
        v=skills;
        vector<int> v1(n,0);
        int i=0;
        int j=1;
        while(i<n && j<2*n)
        {
            if(v[i]<v[j])
            {
                if(j<n) v1[j]++;
                v.push_back(v[i]);
                i=j;
                j++;
            }
            else if(v[i]>v[j])
            {
                v1[i]++;
                v.push_back(v[j]);
                j++;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(v1[i]==k)
            {
                idx=i;
                break;
            }
        }
        return idx;
    }
int main()
{
    int k=2;
    vector<int> skills{4,2,6,3,9};
    int x=findWinningPlayer(skills,k);
    cout<<x<<endl;
    return 0;
}