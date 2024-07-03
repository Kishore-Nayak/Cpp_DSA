#include<iostream>
using namespace std;
void hanoi(int n,char a,char b,char c) //s->source, h->helper, d->destination
{
    if(n==0) return;
    hanoi(n-1,a,c,b);
    cout<<a<<" -> "<<c<<endl;
    hanoi(n-1,b,a,c);
}
int main()
{
    hanoi(4,'A','B','C');
    return 0;
}