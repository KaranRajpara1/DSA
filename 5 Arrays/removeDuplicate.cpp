// remove duplicate from sorted array
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int removeDuplicate(int arr[],int n)
{
    int res = 1;
    for(int i=1; i<n; i++)
    {
        if(arr[i] != arr[res-1])
        {
            arr[res] = arr[i];
            res++;
        }
    }
    return res;
}
int main()
{
    int arr[] = {10,20,20,30,30,30,30};
    int n = 7;
    int temp = removeDuplicate(arr,n);
    cout << "Array after duplication " << endl;
    for(int i=0; i<temp; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}