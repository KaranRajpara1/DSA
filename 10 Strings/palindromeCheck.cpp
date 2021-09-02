#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool isPal(string str)
{
    int start = 0, end = str.size()-1;
    while(start < end)
    {
        if(str[start] != str[end]) return false;
        start++;
        end--;
    }
    return true;
}
int main()
{
    string str;
    cin >> str;
    cout << isPal(str) << endl;
    return 0;
}