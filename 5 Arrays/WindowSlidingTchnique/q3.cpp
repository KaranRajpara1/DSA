// we are given unsorted array of non negative integers. find if therre is a subarray with given sum
// if it is given that array contains only non negative integers then only this technique will ewrork.
#include<iostream>
#include<bits/stdc++.h>
using namespace std; 
bool isSubsum(int arr[],int n,int sum)
{
    int curr_sum = arr[0],s = 0;
    for(int e=1; e<n; e++)
    {
        // clean the previous window
        while(curr_sum > sum && s<e-1)
        {
            curr_sum -= arr[s];
            s++;
        }
        if(curr_sum == sum) return true;
        if(e < n)
        {
            curr_sum += arr[e];
        }
    }
    return (curr_sum==sum);
}
int main()
{
    int arr[] = {1,4,20,3,10,5};
    int n = 6,sum = 3;
    if(isSubsum(arr,n,sum))
    {
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}