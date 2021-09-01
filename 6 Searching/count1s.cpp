// We are given sorted binary array which may contains duplicates. We need to find occurence of 1.
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int countOnes(int arr[],int n)
{
    int l = 0,r = n-1;
    while(l <= r)
    {
        int mid = (l+r)/2;
        if(arr[mid] == 0)
        {
            l = mid +1;
        }
        else
        {
            if(mid == 0 || arr[mid-1]!=arr[mid])
            {
                return (n-mid);
            }
            else
            {
                r = mid-1;
            }
        }
    }
    return 0;
}
int main()
{
    int arr[]= {0,0,0,1,1,1,1};
    int n =7;
    cout << "Total occurence of 1 = " << countOnes(arr,n) << endl;
    return 0;
}