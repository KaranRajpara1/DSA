// we are given two binary subarrays of samesize
// common subarray: it's starting and ending index of both subarray should be same.
// example: i/p: arr1[] = {0,1,0,0,0,0}
//               arr2[] = {1,0,1,0,0,1}
//          o/p : 4
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int largestCommonSub(int arr1[],int arr2[],int n)
{
    // first we will create diff array (i.e arr1[i]-arr2[i])
    int temp[n];
    for(int i=0; i<n; i++)
    {
        temp[i] = arr1[i]-arr2[i];
    }
    // now problem is same as longest subarray with given sum (her sum = 0)
    int res = 0,pre_sum = 0;
    unordered_map<int,int> m;
    for(int i=0; i<n; i++)
    {
        pre_sum += temp[i];
        if(pre_sum == 0)
        {
            res = i+1;
        }
        if(m.find(pre_sum) != m.end())
        {
            res = max(res,i-m[pre_sum]);
        }
        else
        {
            m.insert({pre_sum,i});
        }
    }
    return res;
}
int main()
{
    int n;
    cin >> n;
    int arr1[n],arr2[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr1[i];
    }
    for(int i=0; i<n; i++)
    {
        cin >> arr2[i];
    }
    cout << largestCommonSub(arr1,arr2,n) << endl;
    return 0;
}