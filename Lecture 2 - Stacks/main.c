#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define MAX_STACK_SIZE 100

typedef struct{
    int items[MAX_STACK_SIZE];
    int top;
}Stack;

void initStack(Stack *stack){
    stack->top = -1;
}

bool isStackEmpty(Stack *stack){
    return stack->top == -1;
}

bool isStackFull(Stack *stack){
    return stack->top == MAX_STACK_SIZE - 1;
}

void push(Stack *stack, int item){
    if(isStackFull(stack)){
        return;
    }

    stack->top++;
    stack->items[stack->top] = item;
}

int pop(Stack *stack){
    if(isStackEmpty(stack)){
        return -1;
    }

    int item = stack->items[stack->top];
    stack->top--;
    return item;
}

int peek(Stack *stack){
    if(isStackEmpty(stack)){
        return -1;
    }

    return stack->items[stack->top];
}

int main(){
    Stack stack;
    initStack(&stack);

    push(&stack, 1);
    push(&stack, 22);
    push(&stack, 55);

    int poppedItem = pop(&stack);
    printf("Popped Item: %d\n", poppedItem);

    poppedItem = pop(&stack);
    printf("Popped Item: %d\n", poppedItem);
    
    return 0;
}


