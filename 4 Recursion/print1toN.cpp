#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void print1toN(int n)
{
    // not tail recursive approach
    if(n == 0) return;
    print1toN(n-1);
    cout << n << " ";
}
void print(int n,int k)
{
    // tail recursive approach
    if(n == 0) return;
    cout << k << " ";
    print(n-1,k+1);
}
int main()
{
    int n;
    cout << "Enter number : ";
    cin >> n;
    print1toN(n);
    cout << endl;
    print(n,1);
    return 0;
}