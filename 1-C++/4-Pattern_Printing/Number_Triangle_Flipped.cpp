//print the given pattern
//    1
//   12
//  123
// 1234
//12345

#include<iostream>
using namespace std;
int main()
{
    int row;
    cout<<"Enter the number of rows/columns : ";
    cin>>row;
    for(int i=1;i<=row;i++)
    {
        int k=1;
        for(int j=1;j<=row;j++)
        {
            if(j<=(row-i))
            {
                cout<<"   ";
            }
            else
            {
                cout<<" "<<k<<" ";
                k++;
            }
        }
        cout<<endl;
    }
    return 0;
}