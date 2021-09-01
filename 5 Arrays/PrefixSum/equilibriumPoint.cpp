// we are given array of integers find if it has equilibrium point.
// a point is said to be equilibrium point if sum of all elements before it's is equal to sum of all 
// elements after it.
#include<iostream>
#include<bits/stdc++.h>
using namespace std; 
bool isEqPoint(int arr[],int n)
{
    int sum = 0;
    for(int i=0; i<n; i++)
    {
        sum += arr[i];
    }
    int lsum = 0;
    for(int i=0; i<n; i++)
    {
        if(lsum == sum-arr[i])
        {
            return true;
        }
        lsum += arr[i];
        sum -= arr[i];
    }
    return false;
}
int main()
{
    int arr[] = {3,4,8,-9,20,6};
    int n = 6;
    if(isEqPoint(arr,n))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}