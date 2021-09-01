#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void countFreq(int arr[],int n)
{
    unordered_map<int,int> h;
    for(int i=0; i<n; i++)
    {
        h[arr[i]]++;
    }
    // for(auto e:h)
    // {
    //     cout << e.first << " " << e.second << endl;
    // }


    // above will give us output in random order because we use unordered map.

    // if we want to get these in specific order like whichever firstly present in array,
    // it should print first
    // for that we need to modify the solution.

    // algorithm:
    // So, instead of traversing through unordered map, we can traverse through array elements 
    // again so that we get original order and for every item that we trverse,
    // we can print item and it's frequency and to avoide duplicates,
    // we can mark the value (frequency) in map as -1, Once we printed that.
    for(int i=0; i<n; i++)
    {
        if(h[arr[i]] != -1)
        {
            cout << arr[i] << " " << h[arr[i]] << endl;
            h[arr[i]] = -1;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    countFreq(arr,n);
    return 0;
}