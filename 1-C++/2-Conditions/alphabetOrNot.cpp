#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter a character : ";
    cin>>ch;
    int x=(int)ch;
    if((x>=65 && x<=90) || (x>=97 && x<=122))    // A-65   a-97
    {
        cout<<ch<<" is a Alphabet";
    }
    else
    {
        cout<<ch<<" is not an Alphabet.";
    }

}