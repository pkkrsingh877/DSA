// Program to delete the first node of linked list

#include <stdio.h>
#include <stdlib.h>

int main(){
    struct node{
        int data;
        struct node *next;
    };

    int choice;

    struct node *head = NULL;
    struct node *newnode = NULL;
    struct node *temp = NULL;
    struct node *deletenode = NULL;

    do{
        newnode = (struct node*)malloc(sizeof(struct node));

        printf("Enter data: ");
        scanf("%d", &newnode -> data);
        newnode -> next = NULL;

        if(head == NULL){
            head = temp = newnode;
        }else{
            temp -> next = newnode;
            temp = newnode;
        }

        printf("Do you want to continue(0:Break): ");
        scanf("%d",&choice);
    }while(choice);

    printf("Traversing Linked List ...\n\n");

    temp = head;

    while(temp != NULL){
        printf("%d\n", temp -> data);
        temp = temp -> next;
    }

    // Delete first node
    deletenode = head;
    head = head -> next;
    free(deletenode);

    printf("Traversing Linked List After Deletion ...\n\n");

    temp = head;

    while(temp != NULL){
        printf("%d\n", temp -> data);
        temp = temp -> next;
    }

    printf("About to free memory of all nodes ...\n\n");

    temp = head;

    while(temp != NULL){
        struct node *currentnode = temp;
        printf("Free the memory of %d ...\n", currentnode -> data);
        temp = temp -> next;
        free(currentnode);
    }

    return 0;
}