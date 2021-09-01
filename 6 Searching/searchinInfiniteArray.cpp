// We are given infinite size (very big size) sorted array. We need to find element x
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[],int l,int r,int x)
{
    // Iterativ solution
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
int search(int arr[],int x)
{
    if(arr[0] == x) return 0;
    int i=1;
    while(arr[i] < x)
    {
        i = i*2;
    }
    if(arr[i] == x) return i;
    return binarySearch(arr,(i/2)+1,i-1,x);
}
int main()
{
    int arr[]= {1,10,15,20,40,80,90,100,120,500,600,700,800,900,1000,1100,1200,1250};
    int x = 100;
    cout << "Index of element  = " << search(arr,x) << endl;
    return 0;
}