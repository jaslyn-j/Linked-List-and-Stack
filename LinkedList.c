#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"

struct Node *head=NULL;

void insertAtStart(int value){
	struct Node *newNode=(struct Node *)malloc(sizeof(struct Node));
	newNode->data=value;
	newNode->next=head;
	head=newNode;
}
void insertAtEnd(int value){
	struct Node *newNode=(struct Node *)malloc(sizeof(struct Node));
	newNode->data=value;
	newNode->next=NULL;
	if(head==NULL){
		head=newNode;
		return;
	}struct Node *ptr=head;
	while(ptr->next!=NULL){
		ptr=ptr->next;
	}ptr->next=newNode;
}
void insertAtPosition(int value, int position){
	int i;
	struct Node *newNode=(struct Node *)malloc(sizeof(struct Node));
	newNode->data=value;
	if (position==0){
        newNode->next=head;
        head=newNode;
        return;
    }struct Node *ptr=head;
	for(i=0; i<position-1 && ptr!=NULL; i++){
        ptr=ptr->next;
    }if (ptr==NULL){
        printf("Position out of bounds\n");
        free(newNode);
        return;
    }
    newNode->next = ptr->next;
    ptr->next = newNode;
}
void removeAtStart(){
	if(head==NULL){
		printf("Linked List is empty\n");
		return;
	}
	struct Node *ptr=head;
	head=head->next;
	free(ptr);
}
void removeAtEnd(){
	if(head==NULL){
		printf("Underflow\n");
		return;
	}
	struct Node *ptr=head;
	struct Node *preptr=ptr;
	while(ptr->next!=NULL){
		preptr=ptr;
		ptr=ptr->next;
	}preptr->next=NULL;
	free(ptr);
}
void removeAtPosition(int position){
	int i;
	if(head==NULL){
		printf("Underflow\n");
		return;
	}if(position==0){
		struct Node *ptr=head;
		head=head->next;
		free(ptr);
		return;
	}struct Node *ptr=head;
	for(i=0; i<position-1 && ptr!=NULL; i++){
        ptr=ptr->next;
    }if(ptr==NULL||ptr->next==NULL){
        printf("Position out of bounds\n");
        return;
    }struct Node *temp=ptr->next;
    ptr->next = temp->next;
    free(temp);
}
void display(){
	struct Node *ptr=head;
	if(ptr==NULL){
		printf("Underflow\n");
		return;
	}while(ptr!=NULL){
		printf("%d->", ptr->data);
		ptr=ptr->next;
	}printf("NULL\n");
}
