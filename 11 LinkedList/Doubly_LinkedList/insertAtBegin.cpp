#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node *prev;
    Node(int x)
    {
        data = x;
        next = NULL;
        prev = NULL;
    }
};
void printLL(Node *head)
{
    if(head == NULL)return;
    Node *curr = head;
    while(curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}
Node *insertBegin(Node *head,int data)
{
    Node *temp = new Node(data);
    if(head == NULL)
    {
        return temp;
    }
    temp->next = head;
    head->prev = temp;
    return temp;
}
int main()
{
    Node *head = new Node(10);
    head = insertBegin(head,20);
    head = insertBegin(head,30);
    printLL(head);
    return 0;
}