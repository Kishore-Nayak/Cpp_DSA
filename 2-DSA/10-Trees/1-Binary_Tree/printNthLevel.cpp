#include<iostream>
using namespace std;
class Node{ //This is a Tree Node
public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
void printLevel(Node* root,int level,int x){
    if(x==level){
        cout<<root->val<<" ";
        return;
    }
    if(root==NULL) return;
    printLevel(root->left,level,x+1);
    printLevel(root->right,level,x+1);
}
int main(){
    Node* a = new Node(1);  //root node
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(7);
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    printLevel(a,1,1);
    cout<<endl;
    printLevel(a,2,1);
    cout<<endl;
    printLevel(a,3,1);
    cout<<endl;
    return 0;
}