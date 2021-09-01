  #include <iostream>
#include<bits/stdc++.h>
#include <algorithm>
using namespace std;
void countsort(int arr[],int n,int k)
{
    int count[k];
    for(int i=0; i<k; i++)
    {
        count[i] = 0;
    }
    for(int i=0; i<n; i++)
    {
        count[arr[i]]++;
    }

    // cumulative sum
    for(int i=1; i<k; i++)
    {
        count[i]  = count[i] + count[i-1];
    }
    int output[n];
    for(int i=n-1; i>=0; i--)
    {
        output[count[arr[i]]-1] = arr[i];
        count[arr[i]]--;
    }
    for(int i=0; i<n; i++)
    {
        arr[i] = output[i];
    }
}
int main() 
{
    int n,k;
    cin >> n >> k;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    countsort(arr,n,k);
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
