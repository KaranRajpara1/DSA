#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int getSum(int n)
{
    // there is also a equation
    // (n*(n+1))/2
    if(n == 0) return 0;
    return n+getSum(n-1);
}
int main()
{
    int n;
    cout << "Enter number : ";
    cin >> n;
    cout << getSum(n) << endl;
    return 0;
}