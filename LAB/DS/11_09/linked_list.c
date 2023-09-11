#include<stdio.h>
#include<stdlib.h>
typedef struct node{
int data;
struct node* next;
} Node;

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

int main()
{
    Node* head;
    head = (Node*)malloc(sizeof(Node));
    head -> data = 10;
    Node* sec;
    sec = (Node*)malloc(sizeof(Node));
    sec -> data = 20;  
    head -> next = sec;

    Node* third;
    third = (Node*)malloc(sizeof(Node));
    third -> data = 30; 
    sec->next = third;
    disp(head);
    disp(sec);
    disp(third);

    // Removing First node
    Node* ptr = head;
    head = head->next;
    ptr->next = NULL;
    free(ptr);

    disp(head);

    head = addToBeginning(head, 250);
    head = addToBeginning(head, 280);
    disp(head);
    return 0;
}