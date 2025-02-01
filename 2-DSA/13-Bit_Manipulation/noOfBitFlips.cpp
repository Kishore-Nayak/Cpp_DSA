//minimum no of bit flips to convert one number to another
// 5 -> 0101 , 11 -> 1011
// no of flipped bits = 3
#include<iostream>
using namespace std;

int main(){
    int x = 5, y= 11;
    cout<<"No of bit flips : "<<__builtin_popcount(x^y)<<endl;
    return 0;
}