#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int countBits(int n)
{
    int res = 0;
    while(n > 0)
    {
        n = (n&(n-1));
        res++;
    }
    return res;
}
int main()
{
    int n;
    cout << "Enter number : ";
    cin >> n;
    cout << countBits(n) << endl;
    return 0;
}