#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int countSubset(int arr[],int n,int sum)
{
    if(n == 0) return ((sum == 0)?1:0);
    return countSubset(arr,n-1,sum)+countSubset(arr,n-1,sum-arr[n-1]);

}
int main()
{
    int arr[5] = {10,5,2,3,6};
    int n = 5;
    int sum = 8;
    cout << countSubset(arr,n,sum);
    // total 2 pairs {5,3} & {6,2} 
    return 0;
}