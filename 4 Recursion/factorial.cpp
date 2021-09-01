#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{
    // non tail recursive
    if(n==0 || n==1) return 1;
    return n*fact(n-1);
}
int fact2(int n,int k)
{
    // tail recursive
    if(n==0 || n==1) return k;
    return fact2(n-1,k*n);
}
int main()
{
    int n;
    cout << "Enter number : ";
    cin >> n;
    cout << fact(n) << endl;
    cout << fact2(n,1) << endl;
    return 0;
}