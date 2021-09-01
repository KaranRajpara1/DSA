#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void printSnake(vector<vector <int>> &mat)
{
    for(int i=0; i<mat.size(); i++)
    {
        if(i%2 == 0)
        {
            for(int j=0; j<mat[i].size(); j++)
            {
                cout << mat[i][j] << " ";
            }
        }
        else
        {
            for(int j=mat[i].size()-1; j>=0; j--)
            {
                cout << mat[i][j] << " ";
            }
        }
    }
}
int main()
{ 
    int r,c;
    cin >> r >> c;
    vector<vector<int>> mat;
    for(int i=0; i<r; i++)
    {
        vector<int> temp;
        for(int j=0; j<c; j++)
        {
            int res2;
            cin >> res2;
            temp.push_back(res2);
        }
        mat.push_back(temp);
    }
    printSnake(mat);
    return 0;
}