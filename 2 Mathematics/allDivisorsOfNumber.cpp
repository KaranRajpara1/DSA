#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void allDivisors(int n)
{
    int i;
    for(i=1; i*i<n; i++)
    {
        if(n%i == 0)
        {
            cout << i << " ";
        }
    }
    for(; i>=1; i--)
    {
        if(n%i == 0)
        {
            cout << n/i << " ";
        }
        
    }
    cout << endl;
}
int main()
{
    int n;
    cout << "Enter number : ";
    cin >> n;
    allDivisors(n);
    return 0;
}