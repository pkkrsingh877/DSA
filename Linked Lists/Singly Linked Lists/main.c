#include <stdio.h>
#include <stdlib.h>

int main(){
    struct node{
        int data;
        struct node *next;
    };
    int choice;

    struct node *head = NULL;
    struct node *tail = NULL;
    struct node *newNode = NULL;
    struct node *temp = NULL; 

    while(choice){
        // Allocate space for new node
        newNode = (struct node*)malloc(sizeof(struct node));
        
        // Get input in newnode
        printf("Enter Data: ");
        scanf("%d", &newNode -> data);

        // Initially we need to store null in new node
        newNode -> next = NULL;

        if(head == NULL){
            // If there is no element in list then store address of new node in head and temp
            head = temp = newNode;
        }else{
            // storing address of newly created node in previous node
            temp -> next = newNode;
            temp = newNode;
        }

        printf("Do you want to continue adding nodes(0 for No): ");
        scanf("%d",&choice);
    }

    printf("Traversing Linked List...\n");
    
    temp = head;

    while(temp != NULL){
        printf("%d\n", temp -> data);
        temp = temp -> next;
    }

    printf("About to free memory of all nodes...\n\n");
    temp = head;

    while(temp != NULL){
        struct node *currentNode = temp;
        printf("Free The Memory of %d...\n", currentNode -> data);
        temp = temp -> next;
        free(currentNode);
    }


    return 0;
}