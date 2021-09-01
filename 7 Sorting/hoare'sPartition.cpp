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
    //cout << "Hello" << endl;
	int res = partition(arr,l,h);
	//cout << "Index of the pivot = " << res << endl;
    for(int i=0; i<=res; i++)
    {
        cout << arr[i] << " ";
    }
    for(int i=res+1; i<=h; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}