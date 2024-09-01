#include<iostream>
#include<stack>
#include<queue>
using namespace std;
void printQueue(queue<int>& q){
    int n = q.size();
    for(int i=0; i<n; i++){
        int temp=q.front();
        cout<<temp<<" ";
        q.pop();
        q.push(temp);
    }
    cout<<endl;
}
void reverseQueue(queue<int>& q){
    stack<int> st;
    while(q.size()){
        st.push(q.front());
        q.pop();
    }
    while(st.size()){
        q.push(st.top());
        st.pop();
    }
}
int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    printQueue(q);
    reverseQueue(q);
    printQueue(q);
    return 0;
}