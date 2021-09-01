#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int maxLen(int arr[],int n,int sum)
{
    unordered_map<int,int> m;
    int res = 0, pre_sum = 0;
    for(int i=0; i<n; i++)
    {
        pre_sum += arr[i];
        if(pre_sum == sum) 
        {
            res = i+1;
        }
        if(m.find(pre_sum) == m.end())
        {
            // if it is not present then only insert into map
            // so that we do not make new index as value if it is already present
            m.insert({pre_sum,i});
        }
        if(m.find(pre_sum-sum) != m.end())
        {
            res = max(res,i-m[pre_sum-sum]);
        }
    }
    return res;
}
int main()
{
    int n,sum;
    cin >> n >> sum;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    cout << maxLen(arr,n,sum) << endl;
    return 0;
}