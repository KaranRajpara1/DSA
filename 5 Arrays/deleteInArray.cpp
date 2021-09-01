#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int deleteEle(int arr[],int n,int x)
{
    int i;
    for(i=0; i<n; i++)
    {
        if(arr[i] == x) break;
    }
    // if we didi not finad element so we return original size of array only
    if(i == n) return n;
    for(int j=i; j<n-1; j++)
    {
        arr[j] = arr[j+1];
    }
    return n-1;
}
int main()
{
    int arr[] = {3,8,12,5,6};
    int x=12,n=5;
    cout << "array after deletiion: " << endl;
    int temp = deleteEle(arr,n,x);
    for(int i=0; i<temp; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}