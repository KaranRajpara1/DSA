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
Node *insertHead(Node *head,int data){
    Node *temp = new Node(data);
    if(head == NULL){
        temp->next = temp;
        temp->prev = temp;
        return temp;
    }
    head->prev->next = temp;
    temp->next = head;
    head->prev = temp;
    return temp;
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
    head = insertHead(head,5);
    printList(head);
    return 0;
}