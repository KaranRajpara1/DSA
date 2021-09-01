#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int countDigit(int n)
{
    int ans = 0;
    while(n>0)
    {
        ans++;
        n /= 10;
    }
    return ans;
}
int countDigit2(int n)
{
    return floor(log10(n)+1);
}
int main()
{
    int n;
    cout << "Enter number : " << endl;
    cin >> n;
    cout << countDigit(n) << endl;
    cout << countDigit2(n) << endl;
    return 0;
}