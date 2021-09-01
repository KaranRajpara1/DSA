// 90 degree antclockwise
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void rotate90(vector<vector <int>> &mat)
{
    // transpose
    for(int i=0; i<mat.size(); i++)
    {
        for(int j=i+1; j<mat.size(); j++)
        {
            swap(mat[i][j],mat[j][i]);
        }
    }
    // reverse columns
    for(int i=0; i<mat.size(); i++)
    {
        int low = 0,high = mat.size()-1;
        while(low < high)
        {
            swap(mat[low][i],mat[high][i]);
            low++;
            high--;
        }
    }
}
int main()
{ 
    int n;
    cin >> n;
    vector<vector<int>> mat;
    for(int i=0; i<n; i++)
    {
        vector<int> temp;
        for(int j=0; j<n; j++)
        {
            int res2;
            cin >> res2;
            temp.push_back(res2);
        }
        mat.push_back(temp);
    }
    rotate90(mat);
    for(int i=0; i<mat.size(); i++)
    {
        for(int j=0; j<mat[i].size(); j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}