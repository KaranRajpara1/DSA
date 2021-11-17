#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node *prev;
    Node(int x){
        data = x;
        next = NULL;
        prev = NULL;
    }
};
void printLL(Node *head){
    Node *curr = head;
    while(curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << "\n";
}
Node *delHead(Node *head){
    if(head == NULL) return NULL;
    if(head->next == NULL){
        delete head;
        return NULL;
    }
    Node *temp = head;
    head = head->next;
    head->prev = NULL;
    delete temp;
    return head;
}
int main()
{
    Node *head = new Node(10);
    
    head->next = new Node(20);
    head->next->prev = head;

    head->next->next = new Node(30);
    head->next->next->prev = head->next;

    printLL(head);
    head = delHead(head);
    printLL(head);
    return 0;
}