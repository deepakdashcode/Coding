#include<stdio.h>
#include<stdlib.h>

#define MAX_SIZE 5

void enque(int arr[],int *rear,int element)
{
    if((*rear) + 1 == MAX_SIZE) printf("Can not insert, queue is full\n");
    else
    {
        (*rear) ++;
        arr[(*rear)] = element;
        
        }
}
void deque(int arr[], int *front, int *rear)
{
    if((*front) == (*rear)) printf("Queue empty\n");
    else
    {(*front) ++;
    if((*front) == (*rear)) {
        *front = -1;
        *rear = -1;
    }}
}

void display(int arr[], int front, int rear)
{
    for(int i = front + 1; i <= rear; i ++)
    {
        printf("%d  ", arr[i]);
    }
    printf("\n");
}
int main()
{
    int queue[MAX_SIZE];
    int size;
    int f = -1, r = -1;

    enque(queue, &r, 10);
    enque(queue, &r, 30);
    enque(queue, &r, 50);
    enque(queue, &r, 40);
        enque(queue, &r, 10);
    enque(queue, &r, 30);
    enque(queue, &r, 50);
    enque(queue, &r, 40);
    
    display(queue, f, r);

    deque(queue, &f, &r);

    display(queue, f, r);
    deque(queue, &f, &r);

    display(queue, f, r);
        deque(queue, &f, &r);

    display(queue, f, r);

    
             deque(queue, &f, &r);

    display(queue, f, r);

             deque(queue, &f, &r);

    display(queue, f, r);
    
}