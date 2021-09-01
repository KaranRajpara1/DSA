#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[],int n,int x)
{
    // Iterativ solution
    int l = 0, r = n-1;
    while(l <= r)
    {
        int mid = (l+r)/2;
        if(arr[mid] == x) 
            return mid;
        else if(arr[mid] > x)
            r = mid -1;
        else
            l = mid+1;
    }
    return -1;
}
int binarySearch2(int arr[],int l,int r,int x)
{
    if(r < l) return -1;
    int mid = (l+r)/2;
    if(arr[mid] == x) return mid;
    else if(arr[mid] > x) 
    {
        return binarySearch2(arr,l,mid-1,x);
    }
    else
    {
        return binarySearch2(arr,mid+1,r,x);
    }
}
int main()
{
    int arr[] = {10,20,30,40,50,60};
    int n = 6, x = 20;
    cout << "Element present at index " << binarySearch(arr,n,x) << endl;
    cout << "Element present at index " << binarySearch2(arr,0,n-1,x) << endl;
    return 0;
}