#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void reverse(int arr[],int n)
{
    int start = 0,end = n-1;
    while(start <= end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int main()
{
    int arr[] = {10,5,7,30};
    int n=4;
    cout << "Reverse Arrray " << endl;
    reverse(arr,n);
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}