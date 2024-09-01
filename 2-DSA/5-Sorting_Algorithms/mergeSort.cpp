#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>& a, vector<int>& b, vector<int>& ans){
    int i = 0;  //a
    int j = 0;  //b
    int k = 0;  //ans
    while(i<a.size() && j<b.size()){
        if(a[i] <= b[j]) ans[k++] = a[i++];
        else ans[k++] = b[j++];
    }
    while(j<b.size()) ans[k++] = b[j++];    //i==a.size()
    while(i<a.size()) ans[k++] = a[i++];    //j==b.size()
}

void mergeSort(vector<int>& v){
    int n=v.size();
    if(n==1) return;    //base case
    int n1=n/2;
    int n2=n-n1;
    vector<int> a(n1),b(n2);
    //copy paste
    for(int i=0; i<n1; i++) a[i]=v[i];
    for(int i=0; i<n2; i++) b[i]=v[i+n1];
    //magic aka recursion
    mergeSort(a);
    mergeSort(b);
    //merge
    merge(a,b,v);
    //deleting the space to improve the space complexity
    a.clear();
    b.clear();
}

void display(vector<int>& v){
    for(int i=0; i<v.size(); i++) cout<<v[i]<<" ";
    cout<<endl;
}

int main(){
    int arr[]={5,1,3,0,4,9,6};
    int n1=sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr,arr+n1);      //copying the array to vector

    display(v);
    mergeSort(v);
    display(v);
    return 0;
}