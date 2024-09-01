#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> dq;
    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);
    dq.push_front(99);
    cout<<"Front : "<<dq.front()<<endl;
    cout<<"Back : "<<dq.back()<<endl;
    dq.pop_back();
    dq.pop_front();
    cout<<"Front : "<<dq.front()<<endl;
    cout<<"Back : "<<dq.back()<<endl;
    return 0;
}