//Arithmatic Progression
/*
1 3 5 7 9 .........
a=1, d=2           d = common difference

T(n) = a + (n-1)d       **********

T(n) = 1 + (n-1)2  = 1+2n-2 = 2n-1
*/


#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of terms : ";
    cin>>n;
    for(int i=1;i<=2*n-1;i+=2)
    {
        cout<<i<<"  ";
    }
    return 0;
}