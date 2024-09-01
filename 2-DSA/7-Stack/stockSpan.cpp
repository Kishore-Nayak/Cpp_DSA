//doing stock span problem using previous greater element using stack

#include<iostream>
#include<stack>
using namespace std;
void display(int arr[], int n){
    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
    cout<<endl;
}
int main(){
    int arr[]={100,80,60,81,70,60,75,85};
    int n=sizeof(arr)/sizeof(arr[0]);
    int pgi[n];     //previous greatest index
    int ans[n];

    //using a stack : pop -> ans -> push
    stack<int> st;
    st.push(0);
    pgi[0]=-1;

    for(int i=1; i<n; i++){
        //pop all the elements smaller than arr[i]
        while(st.size() && arr[i] >= arr[st.top()]) st.pop();
        //mark the ans in pgi array
        if(st.size()==0) pgi[i]=-1;
        else pgi[i]=st.top();
        //push the index
        st.push(i);
    }
    display(arr,n);
    for(int i=0; i<n; i++) ans[i] = i-pgi[i];
    display(ans,n);
    return 0;
}