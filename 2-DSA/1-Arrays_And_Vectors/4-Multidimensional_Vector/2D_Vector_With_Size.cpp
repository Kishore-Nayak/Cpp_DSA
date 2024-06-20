#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<vector<int>> v(3,vector<int> (3));   //2D vector of size 3x3
    vector<vector<int>> v1(3,vector<int> (3,20));   //2D vector of size 3x3 with values 20
    return 0;
}