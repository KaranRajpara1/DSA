#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool sorted(int arr[],int n)
{
    for(int i=1; i<n; i++)
    {
        if(arr[i] < arr[i-1]) return false;
    }
    return true;
}
int main()
{
    int arr[] = {8,10,10,12};
   if(sorted(arr,4)) cout << "Yes sorted" << endl;
   else cout << "Not sorted" << endl;
    return 0;
}