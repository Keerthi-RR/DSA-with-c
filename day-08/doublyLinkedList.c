#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* prev;
    struct node* next;
};
struct node* insertAtBegin(struct node* head,int data){
    struct node* n=(struct node*)malloc(sizeof(struct node));
    n->data=data;
    n->prev=NULL;
    n->next=head;
    if(head!=NULL){
        head->prev=n;
    }
    return n;
}