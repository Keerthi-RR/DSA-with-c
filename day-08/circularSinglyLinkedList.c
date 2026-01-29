#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *last = NULL;
void insertAtBegin(int value) {
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = value;

    if (last == NULL) {
        last = newnode;
        newnode->next = last;
    } else {
        newnode->next = last->next;
        last->next = newnode;
    }
}
void insertAtEnd(int value) {
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = value;

    if (last == NULL) {
        last = newnode;
        newnode->next = last;
    } else {
        newnode->next = last->next;
        last->next = newnode;
        last = newnode;
    }
}

void insertAfter(int key, int value) {
    struct node *temp;
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = value;

    if (last == NULL) {
        printf("List is empty\n");
        return;
    }

    temp = last->next;
    do {
        if (temp->data == key) {
            newnode->next = temp->next;
            temp->next = newnode;

            if (temp == last)
                last = newnode;

            return;
        }
        temp = temp->next;
    } while (temp != last->next);

    printf("Element not found\n");
}

void display() {
    struct node *temp;

    if (last == NULL) {
        printf("List is empty\n");
        return;
    }

    temp = last->next;
    do {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != last->next);
}

int main() {
    insertAtBegin(10);
    insertAtEnd(20);
    insertAtEnd(30);
    insertAfter(20, 25);

    printf("Circular Singly Linked List:\n");
    display();

    return 0;
}