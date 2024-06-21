#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> v;
        if(n<3) return {};
        for(int i=0;i<n-2;i++)
        {
            for(int j=i+1;j<n-1;j++)
            {
                for(int k=j+1;k<n;k++)
                {
                    if((nums[i]+nums[j]+nums[k])==0)
                    {
                        vector<int> v1(3);
                        v1[0]=nums[i];
                        v1[1]=nums[j];
                        v1[2]=nums[k];

                        v.push_back(v1);
                    }
                }
            }
        }
        int x=v.size();
        //sorting
        for(int i=0;i<x;i++)
        {
            sort(v[i].begin(),v[i].end());
        }
        //checking duplicates
        int i=0;
        int z=x-1;
        while(i<z-1)
        {
            int j=i+1;
            while(j<=z)
            {
                if(v[i]==v[j])
                {
                    v[j]=v[z];
                    j--;
                    z--;
                    v.pop_back();
                }
                j++;
            }
            i++;
        }
        return v;
    }
int main()
{
    vector<int> nums{-1,0,1,2,-1,-4};
    vector<vector<int>> v=threeSum(nums);
    //printing returned vector
    int a=v.size();
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}