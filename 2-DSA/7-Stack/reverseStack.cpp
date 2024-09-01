#include<iostream>
#include<stack>
using namespace std;
void pushAtBottom(stack<int>& st, int n){
    if(st.size()==0){
        st.push(n);
        return;
    }
    int x=st.top();
    st.pop();
    pushAtBottom(st,n);
    st.push(x);
}
void reverseStack(stack<int>& st){
    if(st.size()==1) return;
    int x=st.top();
    st.pop();
    reverseStack(st);
    pushAtBottom(st,x);
}
void display(stack<int>& st){
    if(st.size()==0) return;
    int x=st.top();
    st.pop();
    display(st);
    cout<<x<<" ";
    st.push(x);
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
    cout<<endl;
    reverseStack(st);
    display(st);
    cout<<endl;
    return 0;
}