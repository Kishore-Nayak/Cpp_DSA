#include<iostream>
#include<string>
using namespace std;
int main()
{
    //count the number of times the neighbour character is different
    
    string str="Kishore";    // a ab aa
    int count=0;
    for(int i=0;i<str.size();i++)
    {
        if(str.size()==1 || (str.size()==2 && str[i]==str[i+1])) break;
        else if(str.size()==2 && str[i]!=str[i+1])
        {
            count=1;
            break;
        }
        else if(i==0)
        {
            if(str[i]!=str[i+1]) count++;
        }
        else if(i==str.size()-1)
        {
            if(str[i]!=str[i-1]) count++;
        }
        else if(str[i]!=str[i-1] && str[i]!=str[i+1]) count++;
    }
    cout<<count<<endl;
    return 0;
}