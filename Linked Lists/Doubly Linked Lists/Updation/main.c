#include <stdio.h>
#include <stdlib.h>

int main() {
    struct node{
        int data;
        struct node *previous;
        struct node *next;
    };
    
    struct node *head = NULL; 
    struct node *previous = NULL; 
    struct node *next = NULL; 
    struct node *temp = NULL;
    struct node *newnode = NULL; 
    struct node *deletenode = NULL;
    struct node *tail = NULL;
    
    int choice, data;
    
    do{
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter Data: ");
        scanf("%d", &newnode -> data);
        newnode -> previous = NULL;
        newnode -> next = NULL;
        
        if(head == NULL){
            head = temp = tail = newnode;
        }else{
            temp -> next = newnode;
            newnode -> previous = temp;
            temp = temp -> next;
            tail = newnode;
        }
        printf("Do you want to continue adding nodes(0:No): ");
        scanf("%d", &choice);
    }while(choice);
    
    printf("Traversing in normal order: \n");
    temp = head;
    
    do{
        printf("%d\n", temp -> data);
        temp = temp -> next;
    }while(temp != NULL);
    
    int value;
    printf("Enter Data to be updated: ");
    scanf("%d", &value);
    
    temp = head;
    do{
        if(temp -> data == value){
            printf("Enter new data: ");
            scanf("%d", &data);
            temp -> data = data;
        }
        temp = temp -> next;
    }while(temp != NULL);

    printf("Traversing After Updation: \n");

    temp = head;
    
    do{
        printf("%d\n", temp -> data);
        temp = temp -> next;
    }while(temp != NULL);
    
    printf("Traversing in reverse order: \n");
    temp = tail;

    do{
        printf("%d\n", temp -> data);
        temp = temp -> previous;
    }while(temp != NULL);
    
    printf("Deleting memory consumed by linked list: \n");
    temp = head;
    
    do{
        printf("Freeing memory of %d\n", temp -> data);
        deletenode = temp;
        temp = temp -> next;
        free(deletenode);
    }while(temp != NULL);
    
    return 0;
}

