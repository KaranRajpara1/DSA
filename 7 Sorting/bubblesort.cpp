#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void bubblesort(int arr[],int n)
{
    for(int i=0; i<n-1; i++)
    {
        bool swaped = false;
        for(int j=0; j<n-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swaped = true;
                swap(arr[j],arr[j+1]);
            }
        }
        if(swaped == false)
        {
            break;
        }
    }
}
int main()
{
    int arr[]={2,10,8,7};
    int n = 4;
    bubblesort(arr,n);
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}