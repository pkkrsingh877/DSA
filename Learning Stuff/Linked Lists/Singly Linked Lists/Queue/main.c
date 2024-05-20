// Program to implement queue using singly linked list

#include <stdio.h>
#include <stdlib.h>

int main() {
    struct node{
        int data;
        struct node *next;
    };

    int choice, operation, keepGoing;

    struct node *front = NULL;
    struct node *newnode = NULL;
    struct node *temp = NULL;
    struct node *rear = NULL;
    struct node *deletenode = NULL;

    do {
        newnode = (struct node *)malloc(sizeof(struct node));

        printf("Enter data: ");
        scanf("%d", &newnode->data);
        newnode->next = NULL;

        if (front == NULL) {
            front = temp = newnode;
        } else {
            temp -> next = newnode;
            temp = rear = newnode;
        }

        printf("Do you want to continue(0:Break): ");
        scanf("%d", &choice);
    } while (choice);

    temp = front;
    printf("Traversing Linked List ...\n\n");

    while (temp != NULL) {
        printf("%d\n", temp->data);
        temp = temp->next;
    }

    temp = front;
    printf("Traversing Linked List ...\n\n");

    while (temp != NULL) {
        printf("%d\n", temp->data);
        temp = temp->next;
    }

    temp = front;
    while (temp != NULL) {
        struct node *deletenode = temp;
        printf("Free the memory of %d ...\n", deletenode->data);
        temp = temp->next;
        free(deletenode);
    }

    return 0;
}