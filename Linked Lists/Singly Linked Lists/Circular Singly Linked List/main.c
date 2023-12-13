// Program to implement circular singly linked list

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
        newnode -> next = head;

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

    do{
        printf("%d\n", temp -> data);
        temp = temp -> next;
    }while(temp != head);


    printf("About to free memory of all nodes ...\n\n");

    temp = head;

    do{
        deletenode = temp;
        printf("Free the memory of %d ...\n", deletenode -> data);
        temp = temp -> next;
        free(deletenode);
    }while(temp != head);

    return 0;
}