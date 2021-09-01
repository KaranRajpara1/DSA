#include <iostream>
#include <algorithm>
using namespace std;
int lpartition(int arr[],int l,int h)
{
    int pivot = arr[h];
    int i=l-1;
    for(int j=l; j<=h-1; j++)
    {
        if(arr[j] <= pivot)
        {
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[h]);
    return (i+1);
}
void qsort(int arr[],int l,int h)
{
    if(l < h)
    {
        int p = lpartition(arr,l,h);
        qsort(arr,l,p-1);
        qsort(arr,p+1,h);
    }
}
int main() {
	
    // int arr[]={10,80,30,90,40,50,70};
	// int l=0,h=6;
    int l,h;
    cin >> l >> h;
    int arr[h+1];
    for(int i=0; i<=h; i++)
    {
        cin >> arr[i];
    }
	qsort(arr,l,h);
    for(int i=0; i<=h; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}