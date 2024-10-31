//Kth Smallest element find

#include<iostream>
#include<vector>
using namespace std;

int partition(vector<int>& arr, int si, int ei){
    int pivotElement = arr[(si+ei)/2];
    int count = 0;
    for(int i=si; i<=ei; i++){
        if(i==(si+ei)/2) continue;
        if(arr[i] <= pivotElement) count++;
    }
    int pivotIdx = count + si;
    swap(arr[(si+ei)/2],arr[pivotIdx]);
    int i = si, j = ei;
    while(i<pivotIdx && j>pivotIdx){
        if(arr[i] <= arr[pivotIdx]) i++;
        else if(arr[j] >= arr[pivotIdx]) j--;
        else if(arr[i] > arr[pivotIdx] && arr[j] < arr[pivotIdx]) {
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return pivotIdx;
}

int quickSelect(vector<int>& arr, int si, int ei, int k){
    //si->starting index    ei->ending index
    int pivotIdx = partition(arr,si,ei);
    if(pivotIdx+1 == k) return arr[pivotIdx];
    else if(pivotIdx+1 < k) return quickSelect(arr,pivotIdx+1,ei,k);
    else return quickSelect(arr,si,pivotIdx-1,k);
}

int main(){
    vector<int> arr = {5,1,8,2,7,6,3,4,-8,20};
    for(int i=0; i<arr.size(); i++) cout<<arr[i]<<" ";
    cout<<endl;
    int k = 1;
    int ans = quickSelect(arr, 0, arr.size()-1, k);
    cout<<"Kth smallest element : "<<ans<<endl;
    return 0;
}