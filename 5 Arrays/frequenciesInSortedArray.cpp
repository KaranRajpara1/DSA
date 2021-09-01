// print frequncies of all elements
#include<iostream>
#include<bits/stdc++.h>
using namespace std; 
void printFreq(int arr[],int n)
{
    int freq = 1,i = 1;
    while(i<n) 
    {
        while(i<n && arr[i] == arr[i-1])
        {
            freq++;
            i++;
        }
        // when last element is same as second last element then this print works
        cout << "Frequency of : " <<  arr[i-1] << " = " << freq << endl;
        freq = 1;
        i++;
    }
    if(n == 1 || arr[n-1] != arr[n-2])
    {
        // if last element is differnt or array has only 1 element then this print works
        cout << "Frequency of : " <<  arr[i-1] << " = " << freq << endl;
    }
}
int main()
{
    int arr[] = {10,10,10,25,30,30};
    int n = 6;
    cout << "Frequncies of all elements " << endl;
    printFreq(arr,n);
    return 0;
}