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
Node *reverseDLL(Node *head)
{
    if(head == NULL) return NULL;
    if(head->next == NULL) return head;
    Node *prev = NULL, *curr = head;
    while(curr->next != NULL)
    {
        prev = curr->next;
        curr->next = curr->prev;
        curr->prev = prev;

        // now insted of curr = curr->next make curr = curr->prev
        // because link is swapped
        curr = curr->prev;
    }
    // for the last node, swapping explicitely 
    // becuase we need pointer of last node to return it as head of new LL
    Node *temp = curr;
    prev = curr->next;
    curr->next = curr->prev;
    curr->prev = prev;
    return temp;
}
int main()
{
    Node *head = new Node(10);
    
    head->next = new Node(20);
    head->next->prev = head;

    head->next->next = new Node(30);
    head->next->next->prev = head->next;

    printLL(head);
    head = reverseDLL(head);
    printLL(head);
    return 0;
}