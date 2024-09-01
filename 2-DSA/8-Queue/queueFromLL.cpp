#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
class Queue{
public:
    Node* head;
    Node* tail;
    int Size=0;
    Queue(){
        head=tail=NULL;
        Size=0;
    }
    void push(int val){
        Node* temp = new Node(val);
        if(Size==0) head=tail=temp;
        else{
            tail->next=temp;
            tail=temp;
        }
        Size++;
    }
    void pop(){
        if(Size==0){
            cout<<"Queue is empty!"<<endl;
            return;
        }
        Node* temp = head;
        head=head->next;
        Size--;
        //to delete the node and freeup memory space
        delete(temp);
    }
    int front(){
        if(Size==0){
            cout<<"Queue is empty!"<<endl;
            return -1;
        }
        return head->val;
    }
    int back(){
        if(Size==0){
            cout<<"Queue is empty!"<<endl;
            return -1;
        }
        return tail->val;
    }
    int size(){
        return Size;
    }
    void display(){
        cout<<"Queue : ";
        Node* temp = head;
        while(temp){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};
int main(){
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    q.display();
    q.pop();
    q.pop();
    q.display();
    cout<<q.size()<<endl;
    return 0;
}