#include <iostream>
#include <algorithm>
using namespace std;
int lpartiton(int arr[],int l,int h)
{
    int pivot = arr[h];
    int i=l-1;
    for(int j=l; j<=h-1; j++)
    {
        if(arr[j] < pivot)
        {
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[h]);
    return (i+1);
}
int kthsmallest(int arr[],int n,int k)
{
    int l=0, r=n-1;
    while(l <= r)
    {
        int  p = lpartiton(arr,l,r);
        if(p == k-1)
        {
            return p;
        }
        else if(p > k-1)
        {
            r = p-1;
        }
        else
        {
            l = p+1;
        }
    }
    return -1;
}
int main() {
	
    // int arr[]={10,80,30,90,40,50,70};
	// int l=0,h=6;
    int n,k;
    cin >> n >> k;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
	cout << arr[kthsmallest(arr,n,k)] << endl;
}