/*

#include<iostream>
using namespace std;
int main()
{
    int row;
    cout<<"Enter the number of rows/columns : ";
    cin>>row;
    for(int i=1;i<=row;i++)
    {
        int k=65;
        for(int j=1;j<=row;j++)
        {
            cout<<(char)k<<" ";
            k++;
        }
        cout<<endl;
    }
    return 0;
}

*/

#include<iostream>
using namespace std;
int main()
{
    int row;
    cout<<"Enter the number of rows/columns : ";
    cin>>row;
    for(int i=1;i<=row;i++)
    {
        for(int j=65;j<65+row;j++)
        {
            cout<<(char)j<<" ";
        }
        cout<<endl;
    }
    return 0;
}