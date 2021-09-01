#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int unionArrays(int a[],int b[],int m,int n)
{
    unordered_set<int> h(a,a+m);
    for(int i=0; i<n; i++)
    {
        h.insert(b[i]);
    }
    return h.size();
}
int main()
{
    int m,n;
    cin >> m >> n;
    int a[m],b[n];
    for(int i=0; i<m; i++)
    {
        cin >> a[i];
    }
    for(int i=0; i<n; i++)
    {
        cin >> b[i];
    }
    cout << unionArrays(a,b,m,n) << endl;
    return 0;
}