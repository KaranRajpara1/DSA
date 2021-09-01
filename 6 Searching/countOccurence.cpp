// We are given sorted array which may contains duplicates. We need to find occurence of element x.
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int firstOccurence(int arr[],int n,int x)
{
    int l = 0, r = n-1;
    while(l <= r) 
    {
        int mid = (l+r)/2;
        if(arr[mid] > x)
        {
            r = mid-1;
        }
        else if(arr[mid] < x)
        {
            l = mid + 1;
        }
        else
        {
            if(mid == 0 || arr[mid]!=arr[mid-1])
            {
                return mid;
            }
            else
            {
                r = mid -1;
            }
        }
    }
    return -1;
}
int lastOccurence(int arr[],int n,int x)
{
    int l = 0, r = n-1;
    while(l <= r) 
    {
        int mid = (l+r)/2;
        if(arr[mid] > x)
        {
            r = mid-1;
        }
        else if(arr[mid] < x)
        {
            l = mid + 1;
        }
        else
        {
            if(mid == n-1 || arr[mid]!=arr[mid+1])
            {
                return mid;
            }
            else
            {
                l = mid + 1;
            }
        }
    }
    return -1;
}
int countOccurence(int arr[],int n,int x)
{
    int first = firstOccurence(arr,n,x);
    if(first == -1)
    {
        return 0;
    }
    return (lastOccurence(arr,n,x)-first+1);
}
int main()
{
    int arr[]= {1,10,10,10,20,20,40};
    int n =7,x = 10;
    cout << "Total occurence = " << countOccurence(arr,n,x) << endl;
    return 0;
}