// we are given array array we need to find maximum circular subarray sum
#include<iostream>
#include<bits/stdc++.h>
using namespace std; 
int normalMaxSum(int arr[],int n)
{
    int res = arr[0],maxEnding = arr[0];
    for(int i=1; i<n; i++)
    {
        maxEnding = max(maxEnding+arr[i],arr[i]);
        res = max(res,maxEnding);
    }
    return res;
}
int overallMaxSum(int arr[],int n)
{
    int max_normal = normalMaxSum(arr,n);
    if(max_normal < 0)
    {
        return max_normal;
    }
    // circular sum
    int arr_sum = 0;
    for(int i=0; i<n; i++)
    {
        arr_sum += arr[i];
        arr[i] = -arr[i];
    }
    int max_circular = arr_sum+normalMaxSum(arr,n);
    return max(max_circular,max_normal);
}
int main()
{
    int arr[] = {3,-4,5,6,-8,7};
    int n = 6;
    cout << "Maximum circular subarray sum  =  " << overallMaxSum(arr,n) << endl;
    return 0;
}