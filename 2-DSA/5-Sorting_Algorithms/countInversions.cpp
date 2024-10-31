#include<iostream>
#include<vector>
using namespace std;

//global variable
int c = 0;

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

int inversions(vector<int>& a, vector<int>& b){
    int i = 0;//a
    int j = 0;//b
    int count = 0;
    while(i<a.size() && j<b.size()){
        if(a[i]>b[j]){
            count += (a.size()-i);
            j++;
        }
        else i++;
    }
    return count;
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

    //count no of inversions
    c += inversions(a,b);
    
    //merge
    merge(a,b,v);
    //deleting the space to improve the space complexity
    a.clear();
    b.clear();
}

int main(){
    vector<int> v = {5,1,3,0,4,9,6};
    int n = v.size();
    mergeSort(v);
    cout<<c<<endl;
    return 0;
}