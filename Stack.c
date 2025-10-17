#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.c"

void push(int value){
	insertAtStart(value);
}
void pop(){
	removeAtStart();
}
void displayStack(){
	display();
}
