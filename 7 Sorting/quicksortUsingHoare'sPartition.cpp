#include <iostream>
#include <algorithm>
using namespace std;
int partition(int arr[],int l,int h)
{
    int pivot = arr[l];
    int i=l-1,j=h+1;
    while(true)
    {
        do
        {
            /* code */
            i++;
        } while (arr[i] < pivot);
        do
        {
            /* code */
            j--;
        } while (arr[j] > pivot);
        if(i >= j) return j;
        swap(arr[i],arr[j]);
        
    }
}
void qsort(int arr[],int l,int h)
{
    if(l < h)
    {
        int p = partition(arr,l,h);
        qsort(arr,l,p);
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