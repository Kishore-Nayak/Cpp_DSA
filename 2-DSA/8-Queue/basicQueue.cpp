#include<iostream>
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
int main(){
    queue<int> q;
    //push
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    printQueue(q);
    //pop
    q.pop();
    printQueue(q);
    //front
    cout<<"Front : "<<q.front()<<endl;
    //size
    cout<<"Size : "<<q.size()<<endl;
    //back
    cout<<"Back : "<<q.back()<<endl;
    //empty()   it returns true if the queue is empty
    cout<<q.empty()<<endl;
    return 0;
}