//no of 1's in a binary
#include<iostream>
using namespace std;

int no_of_set_bits(int n){  //builtin function
    return __builtin_popcount(n);
}

int count_set_bits_manually(int n){
    int count = 0;
    while(n){
        n = n&(n-1);
        count++;
    }
    return count;
} 

int main(){
    cout<<no_of_set_bits(53)<<endl;
    cout<<count_set_bits_manually(53)<<endl;
    return 0;
}