#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.c"

struct Node *top=NULL;
void push(int value){
	insertAtStart(value);
}
void pop(){
	removeAtStart();
}
void displayStack(){
	display();
}
