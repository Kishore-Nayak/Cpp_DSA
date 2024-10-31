#include<iostream>
#include<stack>
#include<string>
using namespace std;

int calculate(int val1, char ch, int val2){
    if(ch=='+') return val1+val2;
    if(ch=='-') return val1-val2;
    if(ch=='*') return val1*val2;
    if(ch=='/') return val1/val2;
}

int postfixEvaluation(string s){
    stack<int> val;
    for(int i=0; i<s.length(); i++){
        if(s[i]>='0' && s[i]<='9') val.push(s[i]-'0');
        else{
            char ch = s[i];
            int val2 = val.top();
            val.pop();
            int val1 = val.top();
            val.pop();
            val.push(calculate(val1,ch,val2));
        }
    }
    return val.top();
}

int main(){
    string postfix;
    cout<<"Enter the postfix expression : ";
    cin>>postfix;
    cout<<"Value : "<<postfixEvaluation(postfix)<<endl;
    return 0;
}