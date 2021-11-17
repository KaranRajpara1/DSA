#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node(int x){
        data = x;
        next = NULL;
    }
};
void printList(Node *head){
    if(head == NULL)return;
    Node *curr = head;
    do{
        cout << curr->data << " ";
        curr = curr->next;
    }while (curr != head);
    cout << "\n";
}
Node *deleteHead(Node *head){
    if(head == NULL) return head;
    if(head->next == head){
        // Single Node 
        delete head;
        return NULL;
    }

    // Copy the value of 2nd node into 1st node
    head->data = head->next->data;

    // Delete the 2nd node
    Node *temp = head->next;
    head->next = temp->next;
    delete temp;
    return head;
}
int main(){
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = head;
    printList(head);
    head = deleteHead(head);
    printList(head);
    return 0;
}