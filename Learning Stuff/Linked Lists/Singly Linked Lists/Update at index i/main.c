// Program to update at index i of linked list where i is not 0 and n
// Here 0 is the first index and n is the last index

#include 
#include 

int main(){
    struct node{
        int data;
        struct node *next;
    };

    int choice;
    int index;

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
            tail = newnode;
        }

        printf("Do you want to continue(0:Break): ");
        scanf("%d",&choice);
    }while(choice);

    // Here get input to store index at which node has to be inserted

    printf("Enter Index: ");
    scanf("%d", &index);

    printf("Traversing Linked List ...\n\n");

    temp = head;
    int count = -1; // Count total number of elements in array

    while(temp != NULL){
        printf("%d\n", temp -> data);
        temp = temp -> next;
        count++;
    }

    // Here we can check if location entered by user is not invalid
    if(index < 1 || index > count){
        printf("Invalid Location!\n\n");
    }else{
        int traverseIndex = 0;
        printf("Traversing to update ...\n\n");

        temp = head;

        while(temp != NULL){
            if(traverseIndex == index){
                // update current node
                int data;
                printf("Enter Updated Data: ");
                scanf("%d", &data);
                temp -> data = data;
            }
            traverseIndex++;
            temp = temp -> next;
        }
    }

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
