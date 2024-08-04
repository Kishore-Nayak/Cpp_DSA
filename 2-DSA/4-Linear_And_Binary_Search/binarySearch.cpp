// for binary search array need to be sorted in ascending or descending order

#include<iostream>
using namespace std;
int main()
{
    int arr[9] = {1,2,4,5,9,15,18,21,24};
    int target = 9;
    int low = 0;
    int high = 8;
    bool flag = true;
    while(low <= high)
    {
            int mid = (high + low) / 2;
            if(arr[mid] == target)
            {
                cout<<"Found"<<endl;
                flag = false;
                break;
            }
            else if(arr[mid] < target) low = mid + 1;
            else if(arr[mid] > target) high = mid - 1;
    }
    if(flag) cout<<"Not Found"<<endl;
    return 0;
}