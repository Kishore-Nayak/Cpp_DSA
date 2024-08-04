#include<iostream>
using namespace std;
int main()
{
    int arr[] = {1,2,2,3,3,3,3,3,4,4,5,8,9};
    int target = 3;
    int low = 0;
    int high = 12;
    bool flag = true;
    while(low <= high)
    {
            int mid = (high + low) / 2;
            if(arr[mid] == target)
            {
                if(arr[mid-1]==target) high=mid-1;
                else
                {
                    cout<<"Index is : "<<mid<<endl;
                    flag=false;
                    break;
                }
            }
            else if(arr[mid] < target) low = mid + 1;
            else if(arr[mid] > target) high = mid - 1;
    }
    if(flag) cout<<"Not Found"<<endl;
    return 0;
}