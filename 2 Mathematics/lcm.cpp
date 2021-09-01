#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    // optimized approach
    if(b == 0)
    {
        return a;
    }
    return gcd(b,a%b);
}
int lcm(int a,int b)
{
    return (a*b)/(gcd(a,b));
}

int main()
{
    int a,b;
    cout << "Enter 2 numbers: " << endl;
    cin >> a >> b;
    cout << "LCM = " << lcm(a,b) << endl;
    return 0;
}