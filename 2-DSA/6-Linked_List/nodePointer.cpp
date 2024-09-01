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
void display(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int size(Node* head){
    Node* temp = head;
    int n = 0;
    while(temp!=NULL){
        temp = temp->next;
        n++;
    }
    return n;
}
int main(){
    Node* a=new Node(45);
    Node* b=new Node(50);
    Node* c=new Node(0);
    Node* d=new Node(-37);

    a->next=b;
    b->next=c;
    c->next=d;

    display(a);
    cout<<size(a)<<endl;
    return 0;
}