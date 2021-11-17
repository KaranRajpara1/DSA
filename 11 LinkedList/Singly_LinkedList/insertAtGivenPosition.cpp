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
Node *insertPos(Node *head,int pos,int data)
{
    if(head == NULL) return NULL;
    Node *temp = new Node(data);
    if(pos == 1)
    {
        temp->next = head;
        return temp;
    }
    Node *curr = head;
    for(int i=1; i<=pos-2 && curr!=NULL; i++)
    {
        curr = curr->next;
    }
    if(curr == NULL)
    {
        // If curr becomes NULL in bwtween means pos > sizeof LL
        // for example we have 5 nodes and pos = 7. So that is invalid;
        // we can add upto 6 positions in this case 
        //so to handle this case we have written this condition
        // Here we do not perform any operation simply return previous head
        return head;
    }
    temp->next = curr->next;
    curr->next = temp;
    return head;
}
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
int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head = insertPos(head,2,15);
    cout << "Hello" << endl;
    printLL(head);
    head = insertPos(head,6,50);
    printLL(head);
    return 0;
}