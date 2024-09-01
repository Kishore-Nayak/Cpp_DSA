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
class LinkedList{
public:
    Node* head;
    Node* tail;
    int size=0;
    LinkedList(){
        head=tail=NULL;
        size=0;
    }
    void insertAtHead(int val){
        Node* temp = new Node(val);
        if(size==0) head=tail=temp;
        else{
            temp->next=head;
            head=temp;
        }
        size++;
    }
    void insertAtTail(int val){
        Node* temp = new Node(val);
        if(size==0) head=tail=temp;
        else{
            tail->next=temp;
            tail=temp;
        }
        size++;
    }
    void insertAtIdx(int idx, int val){
        if(idx<0 || idx>size) cout<<"Invalid Index"<<endl;
        else if(idx==0)insertAtHead(val);
        else if(idx==size) insertAtTail(val);
        else{
            Node* temp = new Node(val);
            Node* ptr=head;
            for(int i=0; i<idx-1; i++){
                ptr=ptr->next;
            }
            temp->next=ptr->next;
            ptr->next=temp;
            size++;
        }
    }
    void deleteAtHead(){
        if(size==0){
            cout<<"List is empty!"<<endl;
            return;
        }
        else head=head->next;
        size--;
    }
    void deleteAtTail(){
        if(size==0){
            cout<<"List is empty!"<<endl;
            return;
        }
        if(size==1){
            head=tail=NULL;
            size--;
            return;
        }
        Node* temp=head;
        for(int i=0; i<size; i++)
        {
            if(temp->next==tail) break;
            else temp=temp->next;
        }
        temp->next=NULL;
        tail=temp;
        size--;
    }
    void deleteAtIdx(int idx){
        if(idx<0 || idx>=size) cout<<"Invalid Index"<<endl;
        else if(idx==0)deleteAtHead();
        else if(idx==size-1) deleteAtTail();
        else{
            Node* temp=head;
            for(int i=0; i<idx-1; i++){
                temp=temp->next;
            }
            temp->next=temp->next->next;
            size--;
        }
    }
    void display(){
        cout<<"List : ";
        Node* temp = head;
        while(temp){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};
int main(){
    LinkedList ll;
    ll.insertAtTail(9);
    ll.display();
    ll.insertAtTail(8);
    ll.insertAtTail(905);
    ll.display();
    ll.insertAtTail(34);
    ll.display();
    ll.insertAtHead(29);
    ll.display();
    ll.insertAtIdx(3,64);
    ll.display();
    ll.deleteAtHead();
    ll.display();
    ll.deleteAtTail();
    ll.display();
    ll.deleteAtIdx(2);
    ll.display();
    return 0;
}