//using max heap
#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int kthSmallest(vector<int>& v, int k){
    priority_queue<int> p;
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
    cout<<kthSmallest(v,k)<<endl;
    return 0;
}