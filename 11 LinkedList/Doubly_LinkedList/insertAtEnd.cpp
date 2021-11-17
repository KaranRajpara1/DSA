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
Node *insertEnd(Node *head,int data)
{
    Node *temp = new Node(data);
    if(head == NULL)
    {
        return temp;
    }
    Node *curr = head;
    while(curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->next = temp;
    temp->prev = curr;
    return head;
}
int main()
{
    Node *head = new Node(10);
    head = insertEnd(head,20);
    head = insertEnd(head,30);
    printLL(head);
    return 0;
}