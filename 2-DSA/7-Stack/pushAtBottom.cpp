#include<iostream>
#include<stack>
using namespace std;
void PushAtBottom(stack<int>& st, int n){
    stack<int> temp;
    while(st.size()){
        temp.push(st.top());
        st.pop();
    }
    st.push(n);
    while(temp.size()){
        st.push(temp.top());
        temp.pop();
    }
}
void display(stack<int>& st){
    stack<int> temp;
    while(st.size()){
        temp.push(st.top());
        st.pop();
    }
    while(temp.size()){
        cout<<temp.top()<<" ";
        st.push(temp.top());
        temp.pop();
    }
    cout<<endl;
}
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    display(st);
    PushAtBottom(st,100);
    display(st);
    return 0;
}