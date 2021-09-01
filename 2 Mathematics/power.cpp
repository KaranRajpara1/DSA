#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int power(int x,int n)
{
    // time complexity = theta(log n)
    // space complexity = theta(log n)
    if(n == 0)
    {
        return 1;
    }
    int temp = power(x,n/2);
    if(n%2 == 0)
    {
        return temp*temp;
    }
    else
    {
        return temp*temp*x;
    }
}
int power2(int x,int n)
{
    // time complexity = theta(log n)
    // space complexity = theta(1)
    // using binary representation
    int res = 1;
    while(n>0)
    {
        if(n%2 != 0)
        {
            res = res*x;
        }
        x = x*x;
        n /= 2;
    }
    return res;
}
int main()
{
    int x,n;
    cout << "Enter x & n : ";
    cin >> x >> n;
    cout << power(x,n) << endl;
    cout << power2(x,n) << endl;
    return 0;
}