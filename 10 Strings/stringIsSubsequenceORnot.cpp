#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool isSubSeq(string s1,string s2,int n,int m)
{
    if(n < m) return false;
    int i=0,j=0;
    while(i<n && j<m)
    {
        if(s1[i] == s2[j])
        {
            i++;
            j++;
        }
        else 
        {
            i++;
        }
    }
    return (j==m);
}
int main()
{
    string s1,s2;
    cin >> s1 >> s2;
    cout << isSubSeq(s1,s2,s1.size(),s2.size()) << endl;
    return 0;
}