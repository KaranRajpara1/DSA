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
    
	int res = lpartition(arr,l,h);
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