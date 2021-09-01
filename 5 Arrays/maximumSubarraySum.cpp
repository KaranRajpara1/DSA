// we are given array array we need to find maximum sum of subarray
#include<iostream>
#include<bits/stdc++.h>
using namespace std; 
int maxSum(int arr[],int n)
{
    int res = arr[0];
    int maxEnding = arr[0];
    for(int i=1; i<n; i++)
    {
        // either extendsubarray (with max sum) or start a new subarray
        maxEnding= max(maxEnding+arr[i],arr[i]);
        res = max(res,maxEnding);
    }
    return res;
}
int main()
{
    int arr[] = {-5,1,-2,3,-1,2,-2};
    int n = 7;
    cout << "Maximum subarray sum  =  " << maxSum(arr,n) << endl;
    return 0;
}