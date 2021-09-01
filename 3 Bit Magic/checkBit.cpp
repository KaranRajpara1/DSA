#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void kthbit(int n,int k)
{
    // using left shift 
    // note: place brackets carefully
    if((n&(1<<(k-1))) != 0)
    {
        cout << "Yes" << endl;
    }
    else{
        cout << "No " << endl;
    }
}
void kthbit2(int n,int k)
{
    // using right shift
    if(((n>>(k-1))&1) == 1)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}
int main()
{
    int n,k;
    cout << "ENter n & k : ";
    cin >> n >> k;
    kthbit(n,k);
    kthbit2(n,k);
    return 0;
}