#include<iostream>
#include "LinkedListDriver.h"

using namespace std;

int insertNodeAtBeginning(Node** head, Node *node) {
    if(*head == NULL) {
        cout<<"Head was null"<<"\n";
        *head = node;
        return 1;
    }
    cout<<"Head was not null"<<"\n";
    Node *temp = *head;
    *head = node;
    node->next = temp;
    return 1; 
}

int insertNodeInTheMiddle(Node **head, Node *node, int pos) {
    Node *temp = *head;
    int i = 0;
    while(temp) {
        i++;
        temp = temp->next;
    }
    if(pos<0 || pos>i)
        return 0;
    temp = *head;
    Node *prev = NULL;
    while(pos > 0) {
        prev = temp;
        temp=temp->next;
        pos--;
    }
    if(!prev) {
        temp = *head;
        *head = node;
        node->next = temp; 
    } else {
        temp = prev->next;
        prev->next = node;
        node->next = temp;
    }
    return 1;
}

int searchData(Node *head, int data) {
    if(!head)
        return 0;
    while(head && head->data != data) {
        head = head->next;
    }
    if(!head)
        return 0;
    cout<<"Found";
    return 1;
}

int printList(Node *head) {
    Node *temp = head;
    while(temp) {
        cout<<temp->data<<endl;
        temp = temp->next;
    }
}

int deleteElement(Node** head, int data) {
    if(!head) 
        return 0;
    Node *temp = *head;
    Node *prev = NULL;
    while(temp && temp->data != data) {
        prev = temp;
        temp = temp->next;
    }
    Node *deleted = NULL;
    if(!temp)
        return 0;
    if(!prev) {
        deleted = *head;
        *head = (*head)->next;
    } else {
        deleted = prev->next;
        prev->next = deleted->next;
    }
    delete(deleted);
    return 1;
}

int main() {
    Node *head = NULL;
    Node *node = new Node;
    node->data = 1;
    printList(head);
    Node *node2 = new Node;
    node2->data = 2;
    node->next = NULL;
    node2->next = NULL;
    Node *node3 = new Node;
    node3->data = 3;
    node3->next = NULL;
    // printList(head);
    insertNodeAtBeginning(&head, node);
    insertNodeAtBeginning(&head, node3);
    cout<<"OP:\n";
    printList(head);
    insertNodeInTheMiddle(&head, node2, 2);
    cout<<"OP:\n";
    searchData(head, 4);
    deleteElement(&head, 2);
    deleteElement(&head, 1);
    printList(head);
}