#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int insert(int arr[],int n,int x,int cap,int pos)
{
    if(n == cap) return n;
    int idx = pos-1;
    for(int i=n-1; i>=idx; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[idx] = x;
    return (n+1);
}
int main()
{
    int arr[] = {5,10,20,-1,-1};
    int x=7,pos = 2;
    cout << "array after insertion: " << endl;
    int temp = insert(arr,3,x,5,pos);
    for(int i=0; i<temp; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}