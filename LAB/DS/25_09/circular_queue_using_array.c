#include <stdio.h>
#define SIZE 5
int items[SIZE];
int front = -1, rear = -1;
int isFull() {
  if ((front == rear + 1) || (front == 0 && rear == SIZE - 1)) return 1;
  return 0;
}
int isEmpty() {
  if (front == -1) return 1;
  return 0;
}
void enque(int element) {
  if (isFull())
    printf("\n Queue is full!! \n");
  else {
    if (front == -1) front = 0;
    rear = (rear + 1) % SIZE;
    items[rear] = element;
    //printf("\n Inserted -> %d", element);
  }
}

int deque() {
  int element;
  if (isEmpty()) {
    printf("\n Queue is empty !! returning -1 \n");
    return -1;
  } \
  else {
    element = items[front];
    if (front == rear) {
    // Q has only one element, so we reset the 
    // queue after dequeing it. 
      front = -1;
      rear = -1;
    } 

    else {
      front = (front + 1) % SIZE;
    }
    printf("\n Deleted element -> %d \n", element);
    return (element);
  }
}

// Display the queue
void display() {
  int i;
  if (isEmpty())
    printf(" \n Empty Queue\n");
  else {
    printf("\n Front -> %d ", front);
    printf("\n Items -> ");
    for (i = front; i != rear; i = (i + 1) % SIZE) {
      printf("%d ", items[i]);
    }
    printf("%d ", items[i]);
    printf("\n Rear -> %d \n", rear);
  }
}

int main() {
  // Fails because front = -1
  deque();
  enque(1);
  enque(2);
  enque(3);
  enque(4);
  display();
  deque();
  display();

  return 0;
}