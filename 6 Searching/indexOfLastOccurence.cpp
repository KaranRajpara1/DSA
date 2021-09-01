#include<iostream>
#include<bits/stdc++.h>
using namespace std;
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
int main()
{
    int arr[]= {5,10,10,10,10,20,20};
    int n =7,x = 10;
    cout << "Last occurence index = " << lastOccurence(arr,n,x) << endl;
    return 0;
}