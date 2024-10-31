#include<iostream>
#include<stack>
#include<string>
using namespace std;

int priority(char ch){
    if(ch=='+' || ch=='-') return 1;
    else if(ch=='*' || ch=='/') return 2;
}

string calculate(string val1, char ch, string val2){
    return val1+val2+ch;
}

string infixToPostfix(string s){
    stack<string> val;
    stack<char> op;
    for(int i=0; i<s.length(); i++){
        if(s[i]>='0' && s[i]<='9') val.push(string(1,s[i]));
        else if(op.size()==0) op.push(s[i]);
        else if(priority(s[i]) > priority(op.top())) op.push(s[i]);
        else{
            while(op.size() && priority(s[i]) <= priority(op.top())){
                char ch = op.top();
                op.pop();
                string val2 = val.top();
                val.pop();
                string val1 = val.top();
                val.pop();
                val.push(calculate(val1,ch,val2));
            }
            op.push(s[i]);
        }
    }
    while(op.size()){
        char ch = op.top();
        op.pop();
        string val2 = val.top();
        val.pop();
        string val1 = val.top();
        val.pop();
        val.push(calculate(val1,ch,val2));
    }
    return val.top();
}

int main(){
    string infix;
    cout<<"Enter an infix expression : ";
    cin>>infix;
    cout<<"Postfix Expression : "<<infixToPostfix(infix)<<endl;
    return 0;
}