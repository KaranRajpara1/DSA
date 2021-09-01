// We are given unsorted array. We need to find pick element in this array.
// An element is called puick element if it is not smaller than it's neighbours.
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int getPick(int arr[],int n)
{
    int low = 0, high = n-1;
    while(low <= high)
    {
        int mid = (low+high)/2;
        if((mid == 0 || arr[mid-1]<=arr[mid]) && (mid==n-1 || arr[mid+1]<=arr[mid]))
        {
            return mid;
        }
        if(mid > 0 && arr[mid-1] > arr[mid])
        {
            high = mid-1;
        }
        else
        {
            low = mid+1;
        }
    }
    return -1;
}
int main()
{
    int arr[]= {10,20,15,5,23,90,67};
    int n=7;
    cout << "Index of pick element  = " << getPick(arr,n) << endl;
    return 0;
}