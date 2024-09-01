#include<iostream>
#include <limits.h>
using namespace std;
int main(){
    int arr[]={5,3,1,8,4,2};
    int n=6;

    //printing
    for(int el : arr) cout<<el<<" ";
    cout<<endl;

    //insertion sort
    for(int i=1; i<n; i++){
        int j=i;
        while(j > 0 && arr[j] < arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }

    //printing
    for(int el : arr) cout<<el<<" ";
    cout<<endl;

    return 0;
}