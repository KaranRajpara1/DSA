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
void printList(Node *head){
    if(head == NULL)return;
    Node *curr = head;
    do{
        cout << curr->data << " ";
        curr = curr->next;
    }while (curr != head);
    cout << "\n";
}
Node *insertEnd(Node *head,int data){
    // same as insertBegin()
    // just we do not need to modify the head
    Node *temp = new Node(data);
    if(head == NULL){
        temp->next = temp;
        temp->prev = temp;
        return temp;
    }
    head->prev->next = temp;
    temp->next = head;
    head->prev = temp;
    return head;
}
int main(){
    Node *head = new Node(10);

    head->next = new Node(20);
    head->next->prev = head;
    head->next->next = head;

    head->next->next = new Node(30);
    head->next->next->prev = head->next;
    head->next->next->next = head;

    head->prev = head->next->next;

    printList(head);
    head = insertEnd(head,5);
    printList(head);
    return 0;
}