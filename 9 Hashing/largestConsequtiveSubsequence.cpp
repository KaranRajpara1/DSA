#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int longestConsequtiveSub(int arr[],int n)
{
    unordered_set<int> s(arr,arr+n);
    int res = 0;
    for(auto x:s)
    {
        if(s.find(x-1) != s.end())
        {
            // if previous element is present then we can surely say that this element
            // will not be the first element of consequtive subsequence
            // so we don't need to process this elemnt
            continue;
        }
        else
        {
            int curr = 1;
            while(s.find(x+curr) != s.end())
            {
                curr++;
            }
            res = max(res,curr);
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
    cout << longestConsequtiveSub(arr,n) << endl;
    return 0;
}