// maximum value of arr[j]-arr[i] such that j>i
#include<iostream>
#include<bits/stdc++.h>
using namespace std; 
int maxDiff(int arr[],int n)
{
    int res = arr[1]-arr[0];
    int minElement = arr[0];
    for(int i=1; i<n; i++)
    {
        res = max(res,arr[i]-minElement);
        minElement = min(minElement,arr[i]);
    }
    return res;
}
int main()
{
    int arr[] = {2,3,10,6,4,8,1};
    int n = 7;
    cout << "Maximum differnce  " << maxDiff(arr,n) << endl;
    return 0;
}