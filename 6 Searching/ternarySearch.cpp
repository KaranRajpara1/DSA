// We are given an sorted array. We need  to find whether element is present or not in an array.
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int ternarySearch(int arr[],int n,int x)
{
    int low=0,high=n-1;
    while(low <= high)
    {
        int mid1 = low+((high-low)/3);
        int mid2 = high-((high-low)/3);
        if(arr[mid1] == x) return mid1;
        if(arr[mid2] == x) return mid2;
        if(arr[mid1]>x)
        {
            high = mid1-1;
        }
        else if(arr[mid2]<x)
        {
            low=mid2+1;
        }
        else
        {
            low = mid1+1;
            high = mid2-1;
        }
    }
    return -1;
}
int main()
{
    int arr[]= {1,2,3,4,5,6,7,8,9,10};
    int n=10,x=3;
    cout << "Index of an element : " << ternarySearch(arr,n,x) << endl;
    return 0;
}