// we are given array array we need to find majority element
// an element is majority element if it apperes moret than n/2 times in array. (where n=size of array)
#include<iostream>
#include<bits/stdc++.h>
using namespace std; 
int findMajority(int arr[],int n)
{
    // Moore Vooting algorithm

    // phase 1 = find candidate
    int res = 0,count = 1;
    for(int i=1; i<n; i++) 
    {
        if(arr[res] == arr[i])
        {
            count++;
        }
        else
        {
            count--;
        }
        if(count == 0)
        {
            count = 1;
            res = i;
        }
    }

    //phase 2 = check if the candidate is actually majority
    count = 0;
    for(int i=0; i<n; i++) 
    {
        if(arr[res] == arr[i]) count++;
    }
    if(count <= n/2) res = -1;
    return res;
}
int main()
{
    int arr[] = {8,8,6,6,6,4,6};
    int n = 7;
    cout << "index of Majority element  =  " << findMajority(arr,n) << endl;
    return 0;
}