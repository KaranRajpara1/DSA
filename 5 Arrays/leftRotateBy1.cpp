// left rotate (counter clockwise) array by 1
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void leftRotate(int arr[],int n)
{
    int temp = arr[0];
    for(int i=1; i<n; i++)
    {
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
}
int main()
{
    int arr[] = {1,2,3,4,5};
    int n = 5;
    leftRotate(arr,n);
    cout << "Array after left rotation by 1 " << endl;
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}