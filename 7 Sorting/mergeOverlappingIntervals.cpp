#include <iostream>
#include<bits/stdc++.h>
#include <algorithm>
using namespace std;
struct Interval
{
    int st,end;
};
bool myCmp(Interval a,Interval b)
{
    return (a.st < b.st);
}
void mergeIntervals(Interval arr[],int n)
{
    sort(arr,arr+n,myCmp);
    int res = 0;
    for(int i=1; i<n; i++)
    {
        if(arr[res].end >= arr[i].st)
        {
            arr[res].st = min(arr[res].st,arr[i].st);
            arr[res].end = max(arr[res].end,arr[i].end);
        }
        else
        {
            res++;
            arr[res] = arr[i];
        }
    }
    for(int i=0; i<=res; i++)
    {
        cout << arr[i].st << " " << arr[i].end << endl;
    }
}
int main() 
{
    Interval arr[] =  { {5,10}, {3,15}, {18,30}, {2,7} }; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    mergeIntervals(arr, n); 
    return 0;
}