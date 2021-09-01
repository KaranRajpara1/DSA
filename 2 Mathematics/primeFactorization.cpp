#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void primeFactorization(int n)
{
    if(n<=1)
    {
        return;
    }
    while (n%2 == 0)
    {
        /* code */
        cout << "2 ";
        n /= 2;
    }
    while (n%3 == 0)
    {
        /* code */
        cout << "3 ";
        n /= 3;
    }
    for(int i=5; i*i<=n; i+=6)
    {
        while(n%i == 0)
        {
            cout << i << " ";
            n /= i;
        }
        while(n%(i+2) == 0)
        {
            cout << i+2 << " ";
            n /= (i+2);
        }
    }
    if(n>3)
    {
        // this will be executed if last prime factor has power 1
        cout << n << endl;
    }
    
}
int main()
{
    int n;
    cout << "Enter number : ";
    cin >> n;
    primeFactorization(n);
    return 0;
}