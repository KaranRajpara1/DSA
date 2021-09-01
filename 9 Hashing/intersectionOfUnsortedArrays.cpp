#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int intersection(int a[],int b[],int m,int n)
{
    int res=0;
    unordered_set<int> s(a,a+m);
    for(int i=0; i<n; i++)
    {
        if(s.find(b[i]) != s.end())
        {
            res++;
            s.erase(b[i]);
        }
    }
    return res;
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
    cout << intersection(a,b,m,n) << endl;
    return 0;
}