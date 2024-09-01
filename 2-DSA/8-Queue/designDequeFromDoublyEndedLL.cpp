#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* prev;
    Node* next;
    Node(int val){
        this->val=val;
        this->prev=NULL;
        this->next=NULL;
    }
};
class Deque{
public:
    Node* head;
    Node* tail;
    int s=0;
    Deque(){
        head=tail=NULL;
        s=0;
    }
    void push_front(int val){
        Node* temp = new Node(val);
        if(s==0) head=tail=temp;
        else{
            head->prev=temp;
            temp->next=head;
            head=temp;
        }
        s++;
    }
    void push_back(int val){
        Node* temp = new Node(val);
        if(s==0) head=tail=temp;
        else{
            temp->prev=tail;
            tail->next=temp;
            tail=temp;
        }
        s++;
    }
    void pop_front(){
        if(s==0){
            cout<<"Deque is empty!"<<endl;
            return;
        }
        head=head->next;
        head->prev=NULL;
        s--;
    }
    void pop_back(){
        if(s==0){
            cout<<"Deque is empty!"<<endl;
            return;
        }
        if(s==1){
            head=tail=NULL;
            s--;
            return;
        }
        Node* temp=head;
        for(int i=0; i<s; i++)
        {
            if(temp->next==tail) break;
            else temp=temp->next;
        }
        temp->next=NULL;
        tail=temp;
        s--;
    }
    void display(){
        cout<<"Deque : ";
        Node* temp = head;
        while(temp){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
    int front(){
        if(s==0){
            cout<<"Deque is empty!"<<endl;
            return -1;
        }
        return head->val;
    }
    int back(){
        if(s==0){
            cout<<"Deque is empty!"<<endl;
            return -1;
        }
        return tail->val;
    }
    int size(){
        return s;
    }
    bool isEmpty(){
        if(s==0) return true;
        return false;
    }
};
int main(){
    Deque dq;
    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);
    dq.push_back(40);
    dq.push_back(50);
    dq.push_back(60);
    dq.display();
    dq.push_front(99);
    dq.display();
    dq.pop_back();
    dq.display();
    dq.pop_front();
    dq.display();
    cout<<"Front : "<<dq.front()<<endl;
    cout<<"Back : "<<dq.back()<<endl;
    cout<<"Size : "<<dq.size()<<endl;
    return 0;
}