#include<iostream>
using namespace std;
int main(){
    int arr[11] = {9,10,8,7,6,5,4,3,1,2,0};
    int n = 11;

    //printing
    cout<<"Array before sorting : ";
    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
    cout<<endl;

    //bubble sort
    // int x=n;
    // for(int i=0; i<x-1 , x>1; i++,x--){
    //     for(int j=0; j<x-1; j++){
    //         if(arr[j] > arr[j+1]) swap(arr[j] , arr[j+1]);
    //     }
    // }


    //bubble sort optimised
    int x=n;
    for(int i=0; i<x-1 , x>1; i++,x--){
        bool flag=true;
        for(int j=0; j<x-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j] , arr[j+1]);
                flag=false;
            }
        }
        if(flag) break;     //swap didn't happen
    }

    //printing
    cout<<"Array after sorting : ";
    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}