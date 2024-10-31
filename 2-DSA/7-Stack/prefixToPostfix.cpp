#include<iostream>
#include<stack>
#include<string>
using namespace std;

string calculate(string val1, char ch, string val2){
    return val1+val2+ch;
}

string prefixToPostfix(string s){
    stack<string> val;
    for(int i=s.length()-1; i>=0; i--){ //we traverse reversely
        if(s[i]>='0' && s[i]<='9') val.push(string(1,s[i]));
        else{
            string val1 = val.top();   //now value 1 comes first
            val.pop();
            string val2 = val.top();
            val.pop();char ch = s[i];
            val.push(calculate(val1,ch,val2));
        }
    }
    return val.top();
}

int main(){
    string prefix;
    cout<<"Enter the prefix expression : ";
    cin>>prefix;
    cout<<"Postfix Expression : "<<prefixToPostfix(prefix)<<endl;
    return 0;
}