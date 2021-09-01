// We are given an array of integers. we need to find repeating element.
// all elements from 1 to max(arr)
// 1 <= max(arr) <= n-1 
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int repeatingElement(int arr[],int n)
{
    int slow = arr[0],fast=arr[0];
    do{
        slow = arr[slow];
        fast = arr[arr[fast]];
    }while(slow != fast);
    slow = arr[0];
    while(slow != fast)
    {
        slow = arr[slow];
        fast = arr[fast];
    }
    // we can also return fast.
    return slow;
}
int main()
{
    int arr[]= {1,3,2,4,6,5,7,3};
    int n=8;
    cout << "Repeating element in an array : " << repeatingElement(arr,n) << endl;
    return 0;
}