#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    while(a != b)
    {
        if(a > b)
        {
            a = a-b;
        }
        else
        {
            b = b-a;
        }
    }
    return a;
}
int gcd2(int a, int b)
{
    // optimized approach
    if(b == 0)
    {
        return a;
    }
    return gcd2(b,a%b);
}
int main()
{
    int a,b;
    cout << "Enter  2 numbers : ";
    cin >> a >> b;
    cout << "GCD : " << gcd(a,b) << endl; 
    cout << "GCD : " << gcd2(a,b) << endl; 
    return 0;
}