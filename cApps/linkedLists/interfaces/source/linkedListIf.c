#include "linkedListIf.h"

/*function defintion for creating a node*/
Node* createNode(int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->value = value;
    newNode->next = NULL;
    return newNode;
}

/*function definiton for inseting a node at the head */
void insertNodeAtHead(Node ** listHead, int value )
{

    Node* newNode = createNode(value);
     newNode->next = *listHead;
    *listHead  = newNode;
}

void insertNodeAtTail(Node ** listHead, int value )
{
    Node *newNode = createNode(value);

    if(*listHead != NULL)
    {
        Node *cpyNode  = *listHead;

        while (cpyNode->next !=NULL)
        {
            cpyNode = cpyNode->next; 
        }

        /*asingning the new created node as the tail*/

        cpyNode->next = newNode;

    }
    else
    {
        /*list empty node created now head*/

        *listHead = newNode;
    }


    
}

/*function definiton for deleting a node at the head */
void deleteAtHead(Node **listHead)
{

    if(*listHead == NULL)
    {
        /*do nothing list empty*/
    }
    else
    {
        Node *cpyNode = *listHead;
        *listHead = (*listHead)->next;
        free(cpyNode);

    }

}

/*function defintion for displaying the list*/
void displayList(Node* listHead) {
    Node* current = listHead;
    while (current != NULL) {
        printf("%d -> ", current->value);
        current = current->next;
    }
    printf("NULL\n");
}