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
int main(){
    Node a(40);
    Node b(10);
    Node c(30);
    Node d(71);

    a.next = &b;
    b.next = &c;
    c.next = &d;

    Node temp = a;
    while(true){
        cout<<temp.val<<" ";
        if(temp.next  == NULL) break;
        temp = *temp.next;
    }
    return 0;
}