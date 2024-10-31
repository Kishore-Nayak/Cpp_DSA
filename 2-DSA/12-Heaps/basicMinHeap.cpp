#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main(){
    priority_queue<int, vector<int>, greater<int>> p;  //by default max heap
    p.push(3);
    p.push(1);
    p.push(7);
    p.push(5);
    p.push(2);
    cout<<p.top()<<endl;    //top element is 1
    p.pop();
    cout<<p.top()<<endl;    //top element is 2 now
    return 0;
}