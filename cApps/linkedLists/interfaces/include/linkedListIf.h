#ifndef LINKEDLISTIF_H
#define LINKEDLISTIF_H


#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int value;
    struct node *next;
}Node;



Node* createNode(int value);

void insertNodeAtHead(Node ** listHead, int value );
void insertNodeAtTail(Node ** listHead, int value );
void deleteAtHead(Node **listHead);
void displayList(Node* listHead);

#endif /*LINKEDLISTIF_H*/