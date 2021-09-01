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
int main()
{
    int arr[]= {1,10,10,10,20,20,40};
    int n =7,x = 20;
    cout << "First occurence index = " << firstOccurence(arr,n,x) << endl;
    return 0;
}