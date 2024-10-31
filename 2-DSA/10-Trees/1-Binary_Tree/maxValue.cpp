#include<iostream>
#include<climits>
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
void display(Node* root){
    if(root==NULL) return;
    cout<<root->val<<" ";
    display(root->left);
    display(root->right);
}
int maxValue(Node* root){
    if(root==NULL) return INT_MIN;
    return max(root->val , max(maxValue(root->left) , maxValue(root->right)));
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
    display(a);
    cout<<endl<<maxValue(a)<<endl;
    return 0;
}