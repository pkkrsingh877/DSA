#include <stdio.h>
#include <stdlib.h>

struct TreeNode {
    int data;
    struct TreeNode* left;
    struct TreeNode* right;
};

// Function to create a new node
struct TreeNode* createNode(int value) {
    struct TreeNode* newNode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    if (newNode == NULL) {
        // Handle memory allocation failure
        printf("Memory allocation failed.\n");
        exit(EXIT_FAILURE);
    }

    newNode->data = value;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// Function to insert a node into the binary tree
void insertNode(struct TreeNode** root, int value) {
    if (*root == NULL) {
        // If the tree is empty, create a new node as the root
        *root = createNode(value);
    } else {
        // If the tree is not empty, determine whether to insert on the left or right
        if (value < (*root)->data) {
            insertNode(&((*root)->left), value);
        } else {
            insertNode(&((*root)->right), value);
        }
    }
}

// Function to print the elements of the binary tree using in-order traversal
void inOrderTraversal(struct TreeNode* root) {
    if (root != NULL) {
        inOrderTraversal(root->left);
        printf("%d ", root->data);
        inOrderTraversal(root->right);
    }
}

// Pre-Order traversal of the magical tree
void preOrderTraversal(struct TreeNode* root) {
    if (root != NULL) {
        printf("%d ", root->data);
        preOrderTraversal(root->left);
        preOrderTraversal(root->right);
    }
}

// Post-Order traversal of the magical tree
void postOrderTraversal(struct TreeNode* root) {
    if (root != NULL) {
        postOrderTraversal(root->left);
        postOrderTraversal(root->right);
        printf("%d ", root->data);
    }
}

// Function to deallocate memory for each node in post-order traversal
void freeTree(struct TreeNode* root) {
    if (root != NULL) {
        printf("Freeing Memory for %d\n", root -> data);
        freeTree(root->left);
        freeTree(root->right);
        free(root);
    }
}

int main() {
    struct TreeNode* root = NULL;
    int choice, data;

    // Inserting nodes

    do{
        printf("Enter Data: ");
        scanf("%d", &data);
        insertNode(&root, data);
        
        printf("Do you want to continue inserting(0/1): ");
        scanf("%d", &choice);
    }while(choice);
    
    // Printing nodes 

    printf("In-order traversal: ");
    inOrderTraversal(root);
    printf("\n");

    printf("Pre-order traversal: ");
    preOrderTraversal(root);
    printf("\n");

    printf("Post-order traversal: ");
    postOrderTraversal(root);
    printf("\n");
    
    // Insert Data 

    printf("Enter Data: ");
    scanf("%d", &data);
    insertNode(&root, data);

    // Print nodes after inserting

    printf("In-order traversal: ");
    inOrderTraversal(root);
    printf("\n");

    printf("Pre-order traversal: ");
    preOrderTraversal(root);
    printf("\n");

    printf("Post-order traversal: ");
    postOrderTraversal(root);
    printf("\n");
    
    // Deallocate memory for each node
    freeTree(root);

    return 0;
}
