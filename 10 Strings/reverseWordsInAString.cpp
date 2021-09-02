#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void reverse(string &str,int start,int end)
{
    while(start < end)
    {
        swap(str[start],str[end]);
        start++;
        end--;
    }
}
void reverseWords(string &str)
{
    int start = 0;
    for(int end = 0; end<str.size(); end++)
    {
        if(str[end] == ' ')
        {
            reverse(str,start,end-1);
            start = end+1;
        }
    }
    // it would not reverse last word because we are reversing a word when we see space after it.
    // But there would not be extra space after last word. So we explicitely reverse last word.
    reverse(str,start,str.size()-1);

    // reverse whole string
    reverse(str,0,str.size()-1);

}
int main()
{
    string str;
    getline(cin,str);
    reverseWords(str);
    cout << str << endl;
    return 0;
}