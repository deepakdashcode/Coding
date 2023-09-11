#include<stdio.h>
#include<stdlib.h>
typedef struct node{
int data;
struct node* next;
} Node;

Node* head = NULL;
void disp(Node* head)
{ 
    while(head)
    {
        printf("%d  ", head->data);
        head = head -> next;
    }
    printf("\n");
}

Node* addToBeginning(Node* head, int data){
    Node* newHead = (Node*)malloc(sizeof(Node));
    newHead->data = data;
    newHead->next = head;

    head = newHead;
    return newHead;
}
void push(int data)
{
    Node* newHead = (Node*)malloc(sizeof(Node));
    newHead->data = data;
    newHead->next = head;

    head = newHead;
    
}
int pop(){
    if(head)
    {
        
    Node* ptr = head;
    int data = ptr->data;
    head = head->next;
    ptr->next = NULL;
    free(ptr);
    return data;
    }
    else{
        printf("Stack Empty, returning -1\n");
    }
}
int isEmpty()
{
    if(head) return 0;
    return 1;
}
int main()
{
    printf("Checking if stack is empty : %d\n", isEmpty());
    push(50);
    printf("Checking if stack is empty : %d\n", isEmpty());
    push(90);
    push(50);
    push(90);
    push(50);
    push(90);
    disp(head);

    int f = pop();
    printf("element popped = %d\n", f);
    disp(head);
    

    
    return 0;
}