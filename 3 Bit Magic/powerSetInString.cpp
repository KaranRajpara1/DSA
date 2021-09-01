#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void printPowerSet(string str)
{
    int n = str.length();
    int powsize = pow(2,n);
    for(int counter=0; counter<powsize; counter++)
    {
        for(int j=0; j<n; j++)
        {
            if(((1<<j)&counter) != 0)
            {
                cout << str[j];
            }
        }
        cout << endl;
    }
}
int main()
{
    string str;
    cout << "Enter string : ";
    cin >> str;
    printPowerSet(str);
    return 0;
}