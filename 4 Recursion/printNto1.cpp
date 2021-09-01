#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void printNto1(int n)
{
    // tail recursive approach
    if(n == 0) return;
    cout << n << " ";
    printNto1(n-1);
}

int main()
{
    int n;
    cout << "Enter number : ";
    cin >> n;
    printNto1(n);
    return 0;
}