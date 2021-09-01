#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool isPow2(int n)
{
    if(n == 0)
    {
        return false;
    }
    return ((n&(n-1)) == 0);

    // we can write it as one liner solution
    // return ((n!=0) && ((n&(n-1)) == 0));
}
int main()
{
    int n;
    cout << "Enter number : ";
    cin >> n;
    if(isPow2(n))
    {
        cout << "It is power of 2" << endl;
    }
    else
    {
        cout << "It is not power of 2" << endl;
    }
    return 0;
}