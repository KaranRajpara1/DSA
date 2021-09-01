#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void printDistinct(int arr[],int n,int k)
{
    unordered_map<int,int> h;
    for(int i=0; i<k; i++)
    {
        h[arr[i]]++;
    }
    cout << h.size() << " ";
    for(int i=1; i<=n-k; i++)
    {
        h[arr[i-1]]--;
        if(h[arr[i-1]] == 0)
        {
            h.erase(arr[i-1]);
        }
        h[arr[i+k-1]]++;
        cout << h.size() << " ";
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
    printDistinct(arr,n,k);
    return 0;
}