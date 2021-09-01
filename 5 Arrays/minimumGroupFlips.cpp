// we are given binary pr boolean array. Our target is to make all elements of binary array same.
// we can make it same by either by flipping all 0's or all 1's
// so we are allowed to do either flip o's or 1's
// find minimum number of flips that require to make all elements same. we need to print those flips.
#include<iostream>
#include<bits/stdc++.h>
using namespace std; 
void printGroups(bool arr[],int n)
{
    for(int i=1; i<n; i++)
    {
        if(arr[i] != arr[i-1])
        {
            if(arr[i] != arr[0])
            {
                cout << "from " << i << " to ";
            }
            else
            {
                cout << i-1 << endl;
            }
        }
    }
    if(arr[n-1] != arr[0])
    {
        // if last element is beginning of group which is supposed to be fliiped
        cout << n-1 << endl;
    }
}
int main()
{
    bool arr[] = {1,0,0,0,1,0,0,1,1,1,1};
    int n = 11;
    cout << "Flips required " << endl;
    printGroups(arr,n);
    return 0;
}