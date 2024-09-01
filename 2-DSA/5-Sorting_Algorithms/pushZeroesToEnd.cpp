//pushing zeroes to the end while maintaining the relative order

#include<iostream>
using namespace std;
int main(){
    int arr[11] = {5,0,1,2,0,0,4,0,3};
    int n = 9;

    //printing
    cout<<"Array before sorting : ";
    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
    cout<<endl;

    //using bubble sort
    int x=n;
    for(int i=0; i<x-1 , x>1; i++,x--){
        for(int j=0; j<x-1; j++){
            if(arr[j] == 0) swap(arr[j] , arr[j+1]);
        }
    }

    //printing
    cout<<"Array after sorting : ";
    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}