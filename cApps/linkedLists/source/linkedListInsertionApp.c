#include "linkedListIf.h"

void singleLinkedListAppMian(void)
{
    system("cls");
    /*implementation*/
     Node* head = NULL;

    insertNodeAtHead(&head, 3);
    insertNodeAtHead(&head, 5);
    insertNodeAtHead(&head, 7);

    printf("Linked List: ");
    displayList(head);

    deleteAtHead(&head);
    printf("After deleting the head: ");
    displayList(head);

    insertNodeAtTail(&head, 12 );

    printf("After deleting the head: ");
    displayList(head);

}

