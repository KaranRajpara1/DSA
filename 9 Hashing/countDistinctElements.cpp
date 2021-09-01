#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int countDistinct(int arr[],int n)
{
    unordered_set<int> s;
    for(int i=0; i<n; i++)
    {
        s.insert(arr[i]);
    }
    return s.size();

    // improved solution in 2 line
    // we can directly create unordered_set from array only. And in set,
    // all elements will be differnet because set does not allow duplications
    // unordered_set<int> s(arr,arr+n);
    // return s.size()
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
    cout << countDistinct(arr,n) << endl;
    return 0;
}