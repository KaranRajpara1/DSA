#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void bTraversal(vector<vector <int>> &mat)
{
    if(mat.size() == 1)
    {
        for(int i=0; i<mat[0].size(); i++)
        {
            cout << mat[0][i] << " ";
        }
    }
    else if(mat[0].size() == 1)
    {
        for(int i=0; i<mat.size(); i++)
        {
            cout << mat[i][0] << " ";
        }
    }
    else
    {
        // first row
        for(int i=0; i<mat[0].size(); i++)
        {
            cout << mat[0][i] << " ";
        }
        // last column
        for(int i=1; i<mat.size(); i++)
        {
            cout << mat[i][mat[0].size()-1] << " ";
        }
        // last row
        for(int i=mat[0].size()-2; i>=0; i--)
        {
            cout << mat[mat.size()-1][i] << " ";
        }
        // first column
        for(int i=mat.size()-2; i>=1; i--)
        {
            cout << mat[i][0] << " ";
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
    bTraversal(mat);
    return 0;
}