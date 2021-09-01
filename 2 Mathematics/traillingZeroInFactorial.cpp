#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int traillingZero(int n)
{
    int res = 0;
    for(int i=5; i<=n; i*= 5)
    {
        res = res + (n/i) ;
    }
    return res;
}
int main()
{
    int n;
    cout << "ENter number : ";
    cin >> n;
    cout << traillingZero(n) << endl;

    return 0;
}