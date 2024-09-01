#include<iostream>
#include<map>
using namespace std;
int main(){
    map<string,int> mp;
    pair<string,int> p1;
    p1.first="Kishore";
    p1.second=47;
    mp.insert(p1);

/*
    pair<string,int> p2;
    p2.first="Nishant";
    p2.second=56;
    mp.insert(p2);

    pair<string,int> p3;
    p3.first="Bikram";
    p3.second=46;
    mp.insert(p3);
*/

    mp["Nishant"]=56;   // Nishant -> key       56 -> value
    mp["Bikram"]=46;

    //printing the hash map
    for(auto it : mp){
        cout<<it.first<<" "<<it.second<<endl;
    }
    cout<<endl;

    //deleting a pair
    mp.erase("Bikram");     //pass only the key

    //printing the hash map
    for(auto it : mp){
        cout<<it.first<<" "<<it.second<<endl;
    }
    
    //printing the size of the map
    cout<<endl<<"Size : "<<mp.size()<<endl;
    return 0;
}