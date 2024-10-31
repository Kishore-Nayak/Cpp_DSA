//max power of 2 less than equal to n
#include<iostream>
#include<string>
#include<cmath>
using namespace std;
long max_power_of_two(int n){
    long temp = n;
    while(n){
        temp = n;
        n = n&(n-1);
    }
    return temp;
}
int main(){
    cout<<max_power_of_two(1029)<<endl;
    return 0;
}