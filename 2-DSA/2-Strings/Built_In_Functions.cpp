#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string str="Kishore";
    cout<<str.size()<<endl;   //printing the size of the string
    cout<<str.length()<<endl;   //printing the size of the string

    str.push_back('a');   //to add a single character in a string
    cout<<str<<endl;
    str.pop_back();       //to delete a single character in a string
    cout<<str<<endl;

    // + operator
    string str2=" Nayak";
    str=str+str2;         //appent another string
    cout<<str<<endl;
    str=str+" is a student.";
    cout<<str<<endl;
    str="The "+str;
    cout<<str<<endl;

    //reverse operator
    string s="Kishore";
    reverse(s.begin(),s.end());
    cout<<s<<endl;

    return 0;
}