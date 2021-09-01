// Given an unsorted array of size n. Array elements are in the range from 1 to n. 
// One number from set {1, 2, …n} is missing and one number occurs twice in the array. 
// Our task is to find these two numbers.
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void missing_repeating(int arr[],int n)
{
    int XOR = 0;
    for(int i=0; i<n; i++)
    {
        XOR = XOR^arr[i];
    }
    for(int i=1; i<=n; i++)
    {
        XOR = XOR^i;
    }
    // rightmost set bit in xor
    int sn = (XOR & (~(XOR-1)));
    int res1=0,res2=0;
    for(int i=0; i<n; i++)
    {
        if((arr[i]&sn) != 0)
        {
            res1 = res1^arr[i];
        }
        else
        {
            res2 = res2^arr[i];
        }
    }
    for(int i=1; i<=n; i++)
    {
        if((i&sn) != 0)
        {
            res1 = res1^i;
        }
        else
        {
            res2 = res2^i;
        }
    }
    bool flag = false;
    for(int i=0; i<n; i++)
    {
        if(arr[i] == res1)
        {
            flag = true;
            break;
        }
    }
    if(flag)
    {
        cout << "Repeating = " << res1 << endl;
        cout << "Missing = " << res2 << endl;
    }
    else
    {
        cout << "Repeating = " << res2 << endl;
        cout << "Missing = " << res1 << endl;
    }
}
int main()
{
    int arr[]= {2,3,2,1,5};
    int n=5;
    missing_repeating(arr,n);
    return 0;
}