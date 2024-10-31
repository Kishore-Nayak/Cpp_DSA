//using min heap
#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int kthLargest(vector<int>& v, int k){
    priority_queue<int, vector<int>, greater<int>> p;
    for(int i=0; i<k; i++) p.push(v[i]);
    for(int i=k; i<v.size(); i++){
        p.push(v[i]);
        p.pop();
    }
    return p.top();
}

int main(){
    vector<int> v = {5,7,-2,0,-9,1,9,78};
    int k = 3;
    cout<<kthLargest(v,k)<<endl;
    return 0;
}