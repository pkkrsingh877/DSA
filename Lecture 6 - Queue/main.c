/*
IMPLEMENTATION OF QUEUE DATA STRUCTURE

Operations to Perform

enqueue(){
    if Queue is not full
        Adds element to the Queue 
}
dequeue(){
    if Queue is not empty
        Removes element from the Queue
};
front(){
    if Queue is not empty
        Gives the first element in the Queue
};
rear(){
    if Queue is not empty
        Gives the last element in the Queue
};

isQueueFull(){
    if Queue is full
        return true
};

isQueueEmpty(){
    is Queue is empty
        return false
};
*/

#include <stdio.h>
#include <stdbool.h>

typedef struct {
  int items[100];
  int front;
  int rear;
} Queue;

void enqueue(Queue *queue, int item) {
  if (queue->rear == 100) {
    printf("Queue is full.\n");
    return;
  }

  queue->items[queue->rear] = item;
  queue->rear++;
}

int dequeue(Queue *queue) {
  if (queue->front == queue->rear) {
    printf("Queue is empty.\n");
    return -1;
  }

  int item = queue->items[queue->front];
  queue->front++;
  return item;
}

int front(Queue *queue) {
  if (queue->front == queue->rear) {
    printf("Queue is empty.\n");
    return -1;
  }

  return queue->items[queue->front];
}

int rear(Queue *queue) {
  if (queue->front == queue->rear) {
    printf("Queue is empty.\n");
    return -1;
  }

  return queue->items[queue->rear - 1];
}

bool isQueueFull(Queue *queue) {
  return queue->rear == 100;
}

bool isQueueEmpty(Queue *queue) {
  return queue->front == queue->rear;
}

int main() {
  Queue queue;
  queue.front = 0;
  queue.rear = 0;

  enqueue(&queue, 1);
  enqueue(&queue, 2);
  enqueue(&queue, 3);

  int item = dequeue(&queue);
  printf("Dequeued item: %d\n", item);

  item = dequeue(&queue);
  printf("Dequeued item: %d\n", item);

  item = dequeue(&queue);
  printf("Dequeued item: %d\n", item);

  return 0;
}
