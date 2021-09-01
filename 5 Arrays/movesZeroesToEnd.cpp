// move all zeroes to end. We need to keep order of remaining elements as it was earlier.
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void moveZeroes(int arr[],int n)
{
    int count = 0;
    for(int i=0; i<n; i++)
    {
        if(arr[i] != 0)
        {
            swap(arr[i],arr[count]);
            count++;
        }
    }
}
int main()
{
    int arr[] = {8,5,0,10,0,20};
    int n = 6;
    moveZeroes(arr,n);
    cout << "Array after moving zeroes to end " << endl;
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}