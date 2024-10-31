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

void quicksort(vector<int>& arr, int si, int ei){   //si->starting index    ei->ending index
    if(si>=ei) return;
    //5,1,8,2,7,6,3,4
    int pivotIdx = partition(arr,si,ei);
    //4,1,3,2,5,7,8,6
    quicksort(arr,si,pivotIdx-1);
    quicksort(arr,pivotIdx+1,ei);
}

int main(){
    vector<int> arr = {5,1,8,2,7,6,3,4};
    for(int i=0; i<arr.size(); i++) cout<<arr[i]<<" ";
    cout<<endl;
    quicksort(arr, 0, arr.size()-1);
    for(int i=0; i<arr.size(); i++) cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}