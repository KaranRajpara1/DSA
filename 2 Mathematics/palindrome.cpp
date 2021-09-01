#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool palindrome(int n)
{
    int temp = n;
    int ans=0;
    while(temp > 0)
    {
        ans = ans*10 + temp % 10;
        temp /= 10;
    }
    return (ans==n);
}
int main()
{
    int n;
    cout << "Enter number: " << endl;
    cin >> n;
    if(palindrome(n))
    {
        cout << n << " is palindrome" << endl;
    }
    else
    {
        cout << n << " is not palindrome" << endl;
    }
    return 0;
}