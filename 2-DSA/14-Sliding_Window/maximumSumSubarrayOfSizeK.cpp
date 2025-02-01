#include<iostream>
using namespace std;
int main(){
    int arr[] = {7,1,2,5,8,4,9,3,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    int ans = arr[0]+arr[1]+arr[2];
    int temp = ans;
    int maxIdx = 0;
    for(int i=3; i<n; i++){
        temp -= arr[i-3];
        temp += arr[i];
        if(temp > ans){
            ans = temp;
            maxIdx = i-2;
        }
    }
    cout<<ans<<endl;
    cout<<maxIdx<<endl;
    return 0;
}