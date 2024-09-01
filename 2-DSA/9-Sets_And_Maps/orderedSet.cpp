#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> s;
    //insert operation
    s.insert(10);
    s.insert(90);
    s.insert(33);
    s.insert(4);
    s.insert(10);
    //printing the set using for each loop
    for(auto el : s){
        cout<<el<<" ";
    }
    cout<<endl;
    //size
    cout<<s.size()<<endl;
    //find an element if present in set or not
    //s.find() -> it searches in the set and if it is not found
    //then it returns the last element
    //if the element is found then s.find() is not equals to the last element
    if(s.find(33) != s.end()) cout<<"Exists"<<endl;
    else cout<<"Doesn't Exists"<<endl;

    if(s.find(30) == s.end()) cout<<"Doesn't Exists"<<endl;
    else cout<<"Exists"<<endl;

    if(s.find(0) != s.end()) cout<<"Exists"<<endl;
    else cout<<"Doesn't Exists"<<endl;

    //deleting an element from set
    s.erase(30);
    return 0;
}