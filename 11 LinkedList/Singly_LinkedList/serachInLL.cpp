#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
int search(Node *head,int x)
{
    if(head == NULL) return -1;
    Node *curr = head;
    int res = 1;
    while(curr != NULL)
    {
        if(curr->data == x)return res;
        res++;
        curr = curr->next; 
    }
    return -1;
}
int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    cout << search(head,20) << endl;
    cout << search(head,35) << endl;
    return 0;
}