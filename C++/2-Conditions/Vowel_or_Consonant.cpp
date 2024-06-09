#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter a character : ";
    cin>>ch;
    int x=(int)ch;
    if((x>=65 && x<=90) || (x>=97 && x<=122))
    {
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
        {
            cout<<ch<<" is a vowel.";
        }
        else
        {
            cout<<ch<<" is not a vowel.";
        }
    }
    else
    {
        cout<<ch<<" is not an Alphabet.";
    }

}