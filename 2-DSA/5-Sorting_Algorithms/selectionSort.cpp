#include<iostream>
#include <limits.h>
using namespace std;
int main(){
    int arr[]={5,3,1,4,2};
    int n=5;

    //printing
    for(int el : arr) cout<<el<<" ";
    cout<<endl;

    //selection sort
    for(int i=0; i<n-1; i++){
        //finding the minimum element
        int minIdx=-1;
        int minEl=INT_MAX;
        for(int j=i; j<n; j++){
            if(minEl > arr[j]){
                minEl = arr[j];
                minIdx = j;
            }
        }
        swap(arr[i],arr[minIdx]);
    }

    //printing
    for(int el : arr) cout<<el<<" ";
    cout<<endl;

    return 0;
}