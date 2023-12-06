#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main() {
    struct node *head = NULL;
    struct node *newnode = NULL;
    struct node *temp = NULL;
    struct node *deletenode = NULL;

    int choice;

    do {
        newnode = (struct node *)malloc(sizeof(struct node));

        printf("Enter data: ");
        scanf("%d", &newnode->data);
        newnode->next = NULL;

        if (head == NULL) {
            head = temp = newnode;
        } else {
            temp->next = newnode;
            temp = newnode;
        }

        printf("Do you want to continue (0: Break): ");
        scanf("%d", &choice);
    } while (choice);

    printf("Traversing Linked List ...\n\n");

    temp = head;

    while (temp != NULL) {
        printf("%d\n", temp->data);
        temp = temp->next;
    }

    // Delete last node
    temp = head;

    while (temp != NULL && temp->next != NULL) {
        deletenode = temp;
        temp = temp->next;
    }

    if (deletenode != NULL) {
        free(temp);
        deletenode->next = NULL;
    } else {
        // Handle the case where the list is empty or has only one element
        free(head);
        head = NULL;
    }

    printf("Traversing Linked List After Deletion ...\n\n");

    temp = head;

    while (temp != NULL) {
        printf("%d\n", temp->data);
        temp = temp->next;
    }

    // Free memory of all nodes
    temp = head;

    while (temp != NULL) {
        struct node *currentnode = temp;
        temp = temp->next;
        printf("Free the memory of %d ...\n", currentnode->data);
        free(currentnode);
    }

    return 0;
}
