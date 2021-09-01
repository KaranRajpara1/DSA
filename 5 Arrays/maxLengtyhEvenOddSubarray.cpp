// we are given array array. we need to find length of longest sub array that has alternating even odd elements
#include<iostream>
#include<bits/stdc++.h>
using namespace std; 
int maxEvenOdd(int arr[],int n)
{
    int res = 1,curr = 1;
    for(int i=1; i<n; i++)
    {
        if((arr[i]%2==0 && arr[i-1]%2!=0) || (arr[i]%2!=0 && arr[i-1]%2==0))
        {
            curr++;
            res =  max(res,curr);
        }
        else
        {
            curr = 1;
        }
    }
    return res;
}
int main()
{
    int arr[] = {10,12,14,7,8};
    int n = 5;
    cout << "Longest even-odd subarray  =  " << maxEvenOdd(arr,n) << endl;
    return 0;
}