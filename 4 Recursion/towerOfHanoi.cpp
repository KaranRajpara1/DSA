#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void TOH(int n,char src,char buff,char dest)
{
    if(n == 1)
    {
        cout << "Move 1 from " << src << " to " << dest << endl; 
        return;
    }
    TOH(n-1,src,dest,buff);
    cout << "Move " << n << " from " << src << " to " << dest << endl;
    TOH(n-1,buff,src,dest);
}
int main()
{
    TOH(3,'A','B','C');
    return 0;
}