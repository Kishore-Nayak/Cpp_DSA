#include <iostream>
using namespace std;

int main() {
 int a = 40;
 int b = 50;
 int *p=&a;
 cout<<p<<endl;     //0x7ffc5e13585c
 p=p+1;      // 4 byte (due to int data type) ahead of p (in hexadecimal)
 cout<<p<<endl;     //0x7ffc5e135860
 return 0;
}