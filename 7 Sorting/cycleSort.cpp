#include <iostream>
#include<bits/stdc++.h>
#include <algorithm>
using namespace std;
void cyclesortDistinct(int arr[],int n)
{
    for(int cs=0; cs<n-1; cs++)
    {
        // fix the first element of cycle seperately
        int item = arr[cs];
        int pos = cs;
        for(int i=cs+1; i<n; i++)
        {
            if(arr[i] < item)
            {
                pos++;
            } 
        }
        swap(item,arr[pos]);

        // loop to fix all elements of cycle
        while(pos != cs)
        {
            pos = cs;
            for(int i=cs+1; i<n; i++)
            {
                if(arr[i] < item)
                {
                    pos++;
                } 
            }
            swap(item,arr[pos]);
        }
    }
}
int main() 
{
    int n;
    cin >> n ;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    cyclesortDistinct(arr,n);
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
