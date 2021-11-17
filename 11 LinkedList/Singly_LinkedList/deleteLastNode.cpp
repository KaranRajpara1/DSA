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
Node *delLast(Node *head)
{
    if(head == NULL)return NULL;
    else if(head->next == NULL)
    {
        // only one node
        Node *temp = head;
        delete temp;
        return NULL;
    }
    Node *curr = head;
    while(curr->next->next != NULL)
    {
        curr = curr->next;
    }
    Node *temp = curr->next; // alternatuive: delete(curr->next);
    curr->next = NULL;
    delete temp;
    return head;
}
void printlist(Node *head)
{
    if(head == NULL) return;
    Node *curr = head;
    while(curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
    
}
int main() 
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head = delLast(head);
    printlist(head);
    return 0;
}