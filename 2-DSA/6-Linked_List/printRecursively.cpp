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
//printing using recursion
void display(Node* head){
    if(head==NULL){
        cout<<endl;
        return;
    }
    cout<<head->val<<" ";
    display(head->next);
}
//printing reversively using recursion
void displayrev(Node* head){
    if(head==NULL) return;
    displayrev(head->next);
    cout<<head->val<<" ";
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
    Node* a=new Node(911);
    Node* b=new Node(50);
    Node* c=new Node(0);
    Node* d=new Node(-37);

    a->next=b;
    b->next=c;
    c->next=d;

    display(a);
    cout<<size(a)<<endl;
    displayrev(a);
    cout<<endl;
    return 0;
}