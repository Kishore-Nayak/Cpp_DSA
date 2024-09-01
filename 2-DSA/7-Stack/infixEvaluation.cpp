#include<iostream>
#include<stack>
using namespace std;
int priority(char ch){
    if(ch=='+' || ch=='-') return 1;
    else if(ch=='*' || ch=='/') return 2;
}
int solve(int val1, int val2, char ch){
    if(ch=='+') return val1+val2;
    else if(ch=='-') return val1-val2;
    else if(ch=='*') return val1*val2;
    else if(ch=='/') return val1/val2;
}
int main(){
    string s="2+6*4/8-3"; //infix expression
    //we need two stacks 1 for values and 1 for operators
    stack<int> val;
    stack<char> op;
    for(int i=0; i<s.size(); i++){
        //check if s[i] is a digit
        if(s[i]>=48 && s[i]<=57){   //digit
            val.push(s[i]-48);
        }
        else{   //s[i] is +,-,*,/
            if(op.size()==0 || priority(s[i]) > priority(op.top()))
                op.push(s[i]);
            else{   //priority(s[i]) <= priority(op.top())
                while(op.size() && priority(s[i]) <= priority(op.top())){
                    char ch = op.top();
                    op.pop();
                    int val2 = val.top();
                    val.pop();
                    int val1 = val.top();
                    val.pop();
                    int ans = solve(val1,val2,ch);
                    val.push(ans);
                }
                op.push(s[i]);
            }
        }
    }
    //the operator stack can have values
    while(op.size()){
        char ch = op.top();
        op.pop();
        int val2 = val.top();
        val.pop();
        int val1 = val.top();
        val.pop();
        int ans = solve(val1,val2,ch);
        val.push(ans);
    }
    cout<<"Ans : "<<val.top()<<endl;
    return 0;
}