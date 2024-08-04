// if an element is not present in the array the previous element is the lower bound

#include<iostream>
using namespace std;
int main()
{
    int arr[9] = {1,2,4,5,9,15,18,21,24};
    int target = 20;
    int low = 0;
    int high = 8;
    bool flag = true;
    while(low <= high)
    {
            int mid = (high + low) / 2;
            if(arr[mid] == target)
            {
                cout<<target<<" is present"<<endl;
                flag = false;
                break;
            }
            else if(arr[mid] < target) low = mid + 1;
            else if(arr[mid] > target) high = mid - 1;
    }
    //for lower bound
    if(flag) cout<<arr[high]<<" is lower bound"<<endl;

    //for upper bound
    if(flag) cout<<arr[low]<<" is upper bound"<<endl;
    
    return 0;
}