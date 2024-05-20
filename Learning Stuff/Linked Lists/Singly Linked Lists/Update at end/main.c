// Program to insert at tail/end of linked list

#include 
#include 

int main(){
    struct node{
        int data;
        struct node *next;
    };

    int choice;

    struct node *head = NULL;
    struct node *newnode = NULL;
    struct node *temp = NULL;
    struct node *tail = NULL;

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
            tail = newnode; // always points to last node
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

    // update head node data
    int data;
    printf("Enter data to update last node data : ");
    scanf("%d", &data);
    
    tail -> data = data;

    printf("Traversing Linked List After updation ...\n\n");

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