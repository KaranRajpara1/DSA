#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int sumOfDigits(int n)
{
    if(n == 0) return 0;
    return (sumOfDigits(n/10)+(n%10));
}
int main()
{
    int n;
    cout << "Enter number : ";
    cin >> n;
    cout << "Number of digits = " << sumOfDigits(n) << endl;
    return 0;
}