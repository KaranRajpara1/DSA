#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void insertionsort(int arr[],int n)
{
    for(int i=1; i<n; i++)
    {
        int key = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}
int main()
{
    int arr[]={20,5,40,60,10,30};
    int n = 6;
    insertionsort(arr,n);
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}