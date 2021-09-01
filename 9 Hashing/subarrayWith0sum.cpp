#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool is0subarray(int arr[],int n)
{
    unordered_set<int> h;
    int pre_sum = 0;
    for(int i=0; i<n; i++)
    {
        pre_sum += arr[i];
        if(h.find(pre_sum) != h.end()) return true;
        if(pre_sum == 0) return true;
        h.insert(pre_sum);
    }
    return false;
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
    cout << is0subarray(arr,n) << endl;
    return 0;
}