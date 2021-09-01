#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void searchElement(vector<vector <int>> &mat,int x)
{
    if(mat[0][0] > x)
    {
        cout << "-1" << endl;
        return;
    }
    if(mat[mat.size()-1][mat[mat.size()-1].size()-1] < x)
    {
        cout << "-1" << endl;
        return;
    }
    int i=0, j=mat.size()-1;
    while(i<mat.size() && j<mat[0].size())
    {
        if(mat[i][j] == x)
        {
            cout << i << " " << j << endl;
            return;
        }
        else if(mat[i][j] > x)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    cout << "-1" << endl;
}
int main()
{ 
    int r,c,x;
    cin >> r >> c >> x;
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
    searchElement(mat,x);
    return 0;
}