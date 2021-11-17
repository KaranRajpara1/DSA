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
Node *insertBegin(Node *head,int data){
    // Naive approach
    Node *temp = new Node(data);
    if(head == NULL){
        head->next = head;
        return head;
    }
    Node *curr = head;
    while(curr->next != head){
        curr = curr->next;
    }
    curr->next = temp;
    temp->next = head;
    return temp;
}
Node *insertBegin2(Node *head,int data){
    // Efficient approach: Insert new node at 2nd place with new data
    // and then swap the data of first node and 2nd node
    // so we will have ultimately insert at begin
    Node *temp = new Node(data);
    if(head == NULL){
        temp->next = temp;
        return temp;
    }
    // inserting new node after 1st node
    temp->next = head->next;
    head->next = temp;

    // swapping 1st node and 2nd node value
    int t = head->data;
    head->data = temp->data;
    temp->data = t;
    return head;

}
int main(){
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = head;
    printList(head);
    head = insertBegin(head,5);
    printList(head);
    head = insertBegin2(head,1);
    printList(head);
    return 0;
}