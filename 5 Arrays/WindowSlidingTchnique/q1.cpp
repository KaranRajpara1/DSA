// we are given array of integers and a number k, find the maimum sum of k consequtivr elements.
#include<iostream>
#include<bits/stdc++.h>
using namespace std; 
int maxSum(int arr[],int n,int k)
{
    int curr_sum = 0;
    for(int i=0; i<k; i++)
    {
        curr_sum += arr[i] ;
    }
    int max_sum = curr_sum;
    for(int i=k; i<n; i++)
    {
        curr_sum = curr_sum + arr[i] - arr[i-k];
        max_sum = max(max_sum,curr_sum);
    }
    return max_sum;
}
int main()
{
    int arr[] = {1,8,30,-5,20,7};
    int n = 6,k = 3;
    cout << "maximum window sum  =  " << maxSum(arr,n,k) << endl;
    return 0;
}