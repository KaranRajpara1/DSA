// we are given array array we need to find maximum consequtive 1's
#include<iostream>
#include<bits/stdc++.h>
using namespace std; 
int maxConsequtiveOnes(int arr[],int n)
{
    int res = 0,curr=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i] == 0)
        {
            curr = 0;
        }
        else
        {
            curr++;
            res = max(res,curr);
        }
    }
    return res;
}
int main()
{
    int arr[] = {1,0,1,1,1,1,0,1,1};
    int n = 9;
    cout << "Maximum consequtive 1's  =  " << maxConsequtiveOnes(arr,n) << endl;
    return 0;
}