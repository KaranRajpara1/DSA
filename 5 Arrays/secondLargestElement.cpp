#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int secondLargest(int arr[],int n)
{
    int res=0,res2=-1;
    for(int i=1; i<n; i++)
    {
        if(arr[i] > arr[res])
        {
            res2 = res;
            res = i;
        }
        else if(arr[i] != arr[res])
        {
            if(arr[res2] < arr[i])
            {
                res2 = i;
            }
        }
    }
    return res2;
}
int main()
{
    int arr[] = {10,10,10};
    cout << "Index of second largest element: " << secondLargest(arr,3) << endl;
    return 0;
}