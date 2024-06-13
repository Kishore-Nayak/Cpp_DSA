#include<iostream>
using namespace std;
int main()
{
    int i=65;
    for(char ch='A';(int)ch<=90;(int)ch++,i++)
    {
        cout<<ch<<"-"<<i<<"  ";
    }


    i=97;
    for(char ch='a';(int)ch<=122;(int)ch++,i++)
    {
        cout<<ch<<"-"<<i<<"  ";
    }

    return 0;
}