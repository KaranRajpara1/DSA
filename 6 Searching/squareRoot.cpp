// We are given a number and we need to find it's square root.
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int squareRoot(int x)
{
    int l=1, r = x, ans = -1;
    while(l <= r)
    {
        int mid = (l+r)/2;
        int mSq = mid*mid;
        if(mSq == x) return mid;
        else if(mSq > x)
        {
            r = mid-1;
        }
        else
        {
            l = mid + 1;
            ans = mid;    
        }
    }
    return ans;
}
int main()
{
    int x = 14;
    cout << "Square Root = " << squareRoot(x) << endl;
    return 0;
}