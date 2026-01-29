#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node* createNode(int data) {
    struct node* n = (struct node*)malloc(sizeof(struct node));
    n->data = data;
    n->next = NULL;
    return n;
}

struct node* insertAtBegin(struct node* head, int data) {
    struct node* n = createNode(data);
    n->next = head;
    return n;
}

struct node* insertAtEnd(struct node* head, int data) {
    struct node* n = createNode(data);

    if (head == NULL) {
        return n;
    }

    struct node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = n;

    return head;  
}

struct node* insertAfter(struct node* head, int key, int data) {
    struct node* temp = head;

    while (temp != NULL && temp->data != key) {
        temp = temp->next;
    }

    if (temp != NULL) {
        struct node* n = createNode(data);
        n->next = temp->next;
        temp->next = n;
    }

    return head; 
}

void display(struct node* head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    struct node* head = NULL;

    head = insertAtBegin(head, 5);
    head = insertAtEnd(head, 7);
    head = insertAtEnd(head, 8);
    head = insertAfter(head, 5, 6);

    display(head);
    return 0;
}
