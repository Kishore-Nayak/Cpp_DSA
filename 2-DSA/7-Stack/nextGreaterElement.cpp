#include<iostream>
#include<stack>
using namespace std;
void display(int arr[], int n){
    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
    cout<<endl;
}
int main(){
    int arr[]={5,3,0,9,4,1,9,2,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int ans[n];

    //using a stack : pop -> ans -> push & reverse traverse
    stack<int> st;
    st.push(arr[n-1]);
    ans[n-1]=-1;

    for(int i=n-2; i>=0; i--){
        //pop all the elements smaller than arr[i]
        while(st.size() && arr[i] >= st.top()) st.pop();
        //mark the ans in ans array
        if(st.size()==0) ans[i]=-1;
        else ans[i]=st.top();
        //push the arr[i]
        st.push(arr[i]);
    }
    display(arr,n);
    display(ans,n);
    return 0;
}