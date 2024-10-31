#include<iostream>
#include<string>
#include<stack>
using namespace std;
int priority(char ch){
    if(ch=='+' || ch=='-') return 1;
    else if(ch=='*' || ch=='/') return 2;
}
string solve(string val1, string val2, char ch){
    string s="";
    s.push_back(ch);
    s += val1;
    s += val2;
    return s;
}
int main(){
    string s="(2+6)*4/8-3"; //infix expression
    //we need two stacks 1 for values (string) and 1 for operators
    stack<string> val;
    stack<char> op;
    for(int i=0; i<s.size(); i++){
        //check if s[i] is a digit
        if(s[i]>=48 && s[i]<=57){   //digit
            val.push(to_string(s[i]-48));
        }
        else{   //s[i] is +,-,*,/,(,)
            if(op.size()==0) op.push(s[i]);
            else if(s[i]=='(') op.push(s[i]);
            else if(op.top()=='(') op.push(s[i]);
            else if(s[i]==')'){
                while(op.top()!='('){
                    char ch = op.top();
                    op.pop();
                    string val2 = val.top();
                    val.pop();
                    string val1 = val.top();
                    val.pop();
                    string ans = solve(val1,val2,ch);
                    val.push(ans);
                }
                op.pop();
            }
            else if(priority(s[i]) > priority(op.top())) op.push(s[i]);
            else{   //priority(s[i]) <= priority(op.top())
                while(op.size() && priority(s[i]) <= priority(op.top())){
                    char ch = op.top();
                    op.pop();
                    string val2 = val.top();
                    val.pop();
                    string val1 = val.top();
                    val.pop();
                    string ans = solve(val1,val2,ch);
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
        string val2 = val.top();
        val.pop();
        string val1 = val.top();
        val.pop();
        string ans = solve(val1,val2,ch);
        val.push(ans);
    }
    cout<<"Ans : "<<val.top()<<endl;
    return 0;
}