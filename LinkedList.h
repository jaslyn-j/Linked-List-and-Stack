#ifndef LINKEDLIST_H
#define LINKEDLIST_H
struct Node{
	int data;
	struct Node *next;
};

void insertAtStart(int value);
void insertAtEnd(int value);
void insertAtMiddle(int value, int position);
void removeAtStart();
void removeAtEnd();
void removeAtPosition(int position);
void display();

#endif
