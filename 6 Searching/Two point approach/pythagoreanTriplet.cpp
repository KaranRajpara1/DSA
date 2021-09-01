// We are given an array of integers. Write a function that return true if there is a triplet (a,b,c) that
// satisfies a^2 +b^2 = c^2 
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool isTriplet(int arr[],int n)
{
    for(int i=0; i<n; i++)
    {
        arr[i] = arr[i]*arr[i];
    }
    sort(arr,arr+n);
    for(int i=n-1; i>=2; i--)
    {
        int l=0,r=n-1;
        while(l < r)
        {
            if(arr[l]+arr[r] == arr[i])
            {
                return true;
            }
            else if(arr[l]+arr[r] < arr[i])
            {
                l++;
            }
            else
            {
                r--;
            }
        }
    }
    return false;
}
int main()
{
    int arr[]= {3,1,4,6,5};
    int n=6;
    if(isTriplet(arr,n))
    {
        cout << "Present" << endl;
    }
    else
    {
        cout << "Not Present" << endl;
    }
    return 0;
}