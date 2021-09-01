// array may be sorted or unsorted. we need to print leaders in it.
//  an element is called leader if there is nothing which is greater than this element on right of it.
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// note: rightmost element is always leader because there are no elements right side
// for ascending order only last element is leader
// for descending order only first element is leader 
void leaders(int arr[],int n)
{
    // This solution prints leaders from right to left
    int curr_leader = arr[n-1];
    cout << arr[n-1] << " ";
    for(int i=n-2; i>=0; i--)
    {
        if(arr[i] > curr_leader)
        {
            cout << arr[i] << " ";
            curr_leader = arr[i];
        }
    }
}
// if we want leaders from left to right then we can store it in differnet array and then
// print that array in reverse order
int main()
{
    int arr[] = {7,10,4,3,6,5,2};
    int n = 7;
    cout << "Leaders in an array  "  << endl;
    leaders(arr,n);
    return 0;
}