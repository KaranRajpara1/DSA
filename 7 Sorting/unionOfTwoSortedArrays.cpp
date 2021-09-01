#include <iostream>
#include <algorithm>
using namespace std;
void Union(int a[],int b[],int m,int n)
{
    int i=0,j=0;
    while(i<m && j<n)
    {
        if(i>0 && a[i] == a[i-1])
        {
            i++;
            continue;
        }
        if(j>0 && b[j] == b[j-1])
        {
            j++;
            continue;
        }
        if(a[i] < b[j])
        {
            cout << a[i] << " ";
            i++;
        }
        else if(a[i] > b[j])
        {
            cout << b[j] << " ";
            j++;
        }
        else
        {
            cout << a[i] << " ";
            i++;
            j++;
        }
    }
    while(i<m)
    {
        if(i>0 && a[i] != a[i-1])
        {
            cout << a[i] << " ";
            i++;
        }    
    }
    while(j < n)
    {
        if(j>0 && b[j] != b[j-1])
        {
            cout << b[j] << " "; 
            j++;
        }           
     }
}
int main() {
	
    int a[]={2,3,3,3,4,4};
    int b[] = {4,4} ;
	int m=6,n=2;
	
	Union(a,b,m,n);
	
}