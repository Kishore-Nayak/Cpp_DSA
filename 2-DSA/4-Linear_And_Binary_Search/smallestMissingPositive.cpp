#include<iostream>
using namespace std;
int main()
{
    int arr[] = {0,1,3,4,6,7,9,10,15};
    int n = 9;
    int low = 0;
    int high = n-1;
    int mid,ans=-1;
    while(low <= high)
    {
        mid = (high+low)/2;
        if(arr[mid]==mid) low = mid+1;
        else
        {
            ans = mid;
            high = mid-1;
        }
    }
    cout<<"The smallest missing number is : "<<ans<<endl;
    return 0;
}