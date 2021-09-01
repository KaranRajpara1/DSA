#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void printSpiral(vector<vector <int>> &mat)
{
    int top=0, bottom=mat.size()-1, left=0, right=mat[0].size()-1;
    while(top <= bottom && left<=right)
    {
        // top row
        for(int i=left; i<=right; i++)
        {
            cout << mat[top][i] << " ";
        }
        top++;
        // right colum
        for(int i=top; i<=bottom; i++)
        {
            cout << mat[i][right] << " ";
        }
        right--;
        // bottom row (reverse order)
        if(top <=  bottom)
        {
            for(int i=right; i>=left; i--)
            {
                cout << mat[bottom][i] << " ";
            }
            bottom--;
        }
        // left colum (reverse order)
        if(left <= right)
        {
            for(int i=bottom; i>=top; i--)
            {
                cout << mat[i][left] << " ";
            }
            left++;
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
    printSpiral(mat);
    return 0;
}