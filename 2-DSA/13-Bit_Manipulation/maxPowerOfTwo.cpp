//max power of 2 less than equal to n
#include<iostream>
using namespace std;

int max_power_of_two_1(int n){
    n = n | (n >> 1);
    n = n | (n >> 2);
    n = n | (n >> 4);
    n = n | (n >> 8);
    return (n+1)>>1;
}

int max_power_of_two_2(int n){
    long temp = n;
    while(n){
        temp = n;
        n = n&(n-1);
    }
    return temp;
}
int main(){
    cout<<max_power_of_two_1(1029)<<endl;
    cout<<max_power_of_two_2(1029)<<endl;
    return 0;
}