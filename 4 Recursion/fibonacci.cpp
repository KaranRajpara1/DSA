#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int fib(int n)
{
    if(n <= 1) return n;
    return fib(n-1)+fib(n-2);
}
int main()
{
    int n;
    cout << "ENter number : ";
    cin >> n;
    cout << fib(n) << endl;
    return 0;
}