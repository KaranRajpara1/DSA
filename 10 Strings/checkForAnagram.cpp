#include<iostream>
#include<bits/stdc++.h>
using namespace std;
const int CHAR = 256;
bool areAnagram(string s1,string s2)
{
    if(s1.size() != s2.size()) return false;
    int freq[CHAR] = {0};
    for(int i=0; i<s1.size(); i++)
    {
        freq[s1[i]]++;
        freq[s2[i]]--;
    }
    for(int i=0; i<CHAR; i++)
    {
        if(freq[i] != 0) return false;
    }
    return true;
}
int main()
{
    string s1,s2;
    cin >> s1 >> s2;
    cout << areAnagram(s1,s2) << endl;
    return 0;
}