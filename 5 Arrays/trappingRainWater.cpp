// we are given array array of non negative numbers. The value represented in array are heights of bars
// how much water we can collect 
#include<iostream>
#include<bits/stdc++.h>
using namespace std; 
int getWater(int arr[],int n)
{
    int res = 0;
    int lmax[n],rmax[n];
    lmax[0] = arr[0];
    for(int i=1; i<n; i++)
    {
        lmax[i] = max(lmax[i-1],arr[i]);
    }
    rmax[n-1] = arr[n-1];
    for(int i=n-2; i>=0; i--)
    {
        rmax[i] = max(arr[i],rmax[i+1]);
    }
    for(int i=1; i<n-1; i++)
    {
        res += (min(lmax[i],rmax[i])-arr[i]);
    }
    return res;
}
int main()
{
    int arr[] = {5,0,6,2,3};
    int n = 5;
    cout << "Maximum unit of water that we can store =  " << getWater(arr,n) << endl;
    return 0;
}