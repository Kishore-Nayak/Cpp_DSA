#include<iostream>
using namespace std;
int main()
{
    int arr[9] = {1,2,4,5,9,15,18,21,24};
    int target = 0;
    bool flag = true;
    for(int i=0; i<9; i++)
    {
        if(arr[i] == target)
        {
            cout<<"Found"<<endl;
            flag = false;
        }
    }
    if(flag) cout<<"Not Found"<<endl;
    return 0;
}