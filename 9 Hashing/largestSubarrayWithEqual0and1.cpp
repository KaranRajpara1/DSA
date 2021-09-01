#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int largestSub(int arr[],int n)
{
    // first we wiil replace all 0 in array with -1
    // Then it will become the same problem as largest subarray with given sum
    // and here we will consider fiven sum as 0
    for(int i=0; i<n; i++)
    {
        if(arr[i] == 0)
        {
            arr[i] = -1;
        }
    }
    unordered_map<int,int> m;
    int pre_sum = 0, res = 0;
    for(int i=0; i<n; i++)
    {
        pre_sum += arr[i];
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
            // m.find(pre_sum) == m.end()
            // if pre_sum is not present then only insert it into map
            m.insert({pre_sum,i});
        }
    }
    return res;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    cout << largestSub(arr,n) << endl;
    return 0;
}