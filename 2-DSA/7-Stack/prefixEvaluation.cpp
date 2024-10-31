#include<iostream>
#include<stack>
#include<string>
using namespace std;

int calculate(int val1, char ch, int val2){
    if(ch == '+') return val1+val2;
    if(ch == '-') return val1-val2;
    if(ch == '*') return val1*val2;
    if(ch == '/') return val1/val2;
}

int prefixEvaluation(string s){
    stack<int> val;
    for(int i=s.length()-1; i>=0; i--){ //we traverse reversely
        if(s[i]>='0' && s[i]<='9') val.push(s[i]-'0');
        else{
            int val1 = val.top();   //now value 1 comes first
            val.pop();
            int val2 = val.top();
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
    cout<<"Value : "<<prefixEvaluation(prefix)<<endl;
    return 0;
}