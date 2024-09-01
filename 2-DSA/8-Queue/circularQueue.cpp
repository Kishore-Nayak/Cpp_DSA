#include<iostream>
#include<vector>
using namespace std;
class Queue{
public:
    int f;
    int b;
    int s;
    vector<int> arr;
    Queue(int val){
        f=0;
        b=0;
        s=0;
        vector<int> v(val);
        arr=v;
    }
    void push(int val){
        if(b==arr.size()){
            cout<<"Queue is full!"<<endl;
            return;
        }
        arr[b]=val;
        b++;
        s++;
    }
    void pop(int val){
        if(s==0){
            cout<<"Queue is empty!"<<endl;
            return;
        }
        f++;
        s--;
    }
    int front(){
        if(s==0){
            cout<<"Queue is empty!"<<endl;
            return;
        }
        return arr[f];
    }
    int back(){
        if(s==0){
            cout<<"Queue is empty!"<<endl;
            return;
        }
        return arr[b-1];
    }
};
int main(){

    return 0;
}