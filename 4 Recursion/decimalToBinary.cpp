#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void decimalToBinary(int n)
{
    if(n == 0)
    {
        return;
    }
    decimalToBinary(n/2);
    cout << n%2;
}
int main()
{
    int n;
    cout << "Enter number : ";
    cin >> n;
    decimalToBinary(n);
    return 0;
}