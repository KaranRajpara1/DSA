// we are given array of integers and a number k, we need to find if there is a subarray of size k which gives given sum
#include<iostream>
#include<bits/stdc++.h>
using namespace std; 
bool givenSum(int arr[],int n,int k,int given_sum)
{
    int curr_sum = 0;
    for(int i=0; i<k; i++)
    {
        curr_sum += arr[i] ;
    }
    if(curr_sum == given_sum) return true;
    for(int i=k; i<n; i++)
    {
        curr_sum = curr_sum + arr[i] - arr[i-k];
        if(curr_sum == given_sum) return true;
    }
    return false;
}
int main()
{
    int arr[] = {1,8,30,-5,20,7};
    int n = 6,k = 3,given_sum = 22;
    if(givenSum(arr,n,k,given_sum))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}