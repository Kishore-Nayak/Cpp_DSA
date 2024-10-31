#include<iostream>
#include<stack>
#include<string>
using namespace std;

string postfixToInfix(string s){
    stack<string> val;
    for(int i=0; i<s.length(); i++){
        if(s[i]>='0' && s[i]<='9') val.push(string(1,s[i]));
        else{
            char ch = s[i];
            string val2 = val.top();
            val.pop();
            string val1 = val.top();
            val.pop();
            val.push(val1+ch+val2);
        }
    }
    return val.top();
}

int main(){
    string postfix;
    cout<<"Enter the postfix expression : ";
    cin>>postfix;
    cout<<"Infix Expression : "<<postfixToInfix(postfix)<<endl;
    return 0;
}