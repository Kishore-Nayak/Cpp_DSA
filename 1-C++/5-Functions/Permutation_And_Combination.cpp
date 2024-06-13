#include<iostream>
using namespace std;
int fact(int x)
{
    int f=1;
    for(int i=2;i<=x;i++)
    {
        f*=i;
    }
    return f;
}
int permutation(int n,int r)
{
    int npr=fact(n)/fact(n-r);
    return npr;
}
int combination(int n,int r)
{
    int ncr=fact(n)/(fact(r)*fact(n-r));
    return ncr;
}
int main()
{
    int n,r;
    cout<<"Enter n : ";
    cin>>n;
    cout<<"Enter r : ";
    cin>>r;
    int ncr=combination(n,r);
    int npr=permutation(n,r);
    cout<<"Permutation is : "<<npr<<endl;;
    cout<<"Combination is : "<<ncr<<endl;
    return 0;
}